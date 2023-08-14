#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
// 
// struct ListNode* removeElements(struct ListNode* head, int val)
//
// {
//
//     typedef struct ListNode ListNode;
//
//     ListNode* ser;
//
//     if (head == NULL)
//     {
//         return head;
//     }
//
//     ListNode* cur = head;
//
//     while (cur && cur->next)
//
//     {
//         ser = cur->next;
//         if (ser->val == val)
//         {
//             cur->next = ser->next;
//             free(ser);
//             ser = NULL;
//         }
//         else
//         {
//             cur = cur->next;
//         }
//     }
//     if (cur->val == val)
//     {
//         cur = cur->next;
//     }
//     return head;
// }
//
//
//int main()
//{
//    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    //赋值
//    n1->val = 7;
//    n2->val = 7;
//    n3->val = 7;
//    n4->val = 7;
//
//    //连接链表
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = NULL;
//
//
//    struct ListNode* head = removeElements(n1,7);
//
//
//	return 0;
//}






struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    typedef struct ListNode ListNode;
    ListNode* cur1, * cur2;
    cur1 = list1;
    cur2 = list2;
    ListNode* newhead = NULL;
    if (cur1 == NULL)
    {
        return cur2;
    }
    else if (cur2 == NULL)
    {
        return cur1;
    }
    if (cur1 != NULL && cur2 != NULL)
    {
        if (cur1->val > cur2->val)
        {
            newhead = cur2;
            cur2 = cur2->next;
        }
        else if (cur1->val <= cur2->val)
        {
            newhead = cur1;
            cur1 = cur1->next;
        }
    }
    ListNode* newhead1 = newhead;
    while (cur1 && cur2)
    {
        if (cur1->val > cur2->val)
        {
            newhead->next = cur2;
            cur2 = cur2->next;
            newhead = newhead->next;
        }
        else
        {
            newhead->next = cur1;
            cur1 = cur1->next;
            newhead = newhead->next;
        }
    }
    if (cur1 == NULL)
    {
        newhead->next = cur2;
    }
    else
    {
        newhead->next = cur1;
    }
    return newhead1;
}


int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));



    struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //赋值
    n1->val = 1;
    n2->val = 2;
    n3->val = 4;
    n4->val = 7;

    //连接链表
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    n4->next = NULL;

    l1->val = 1;
    l2->val = 3;
    l3->val = 4;
    l4->val = 7;

    l1->next = l2;
    l2->next = l3;
    l3->next = NULL;
    l4->next = NULL;
    struct ListNode* head = mergeTwoLists(n1, l1);


    return 0;
}





bool chkPalindrome(ListNode* A)
{
    ListNode* fast = A;
    ListNode* slow = A;
    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;
        fast = fast->next;
    }
    ListNode* cur = slow;
    ListNode* newhead = NULL;
    while (cur)
    {
        ListNode* next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    while (slow)
    {
        if (A->val != newhead->val)
        {
            return false;
        }
        A = A->next;
        newhead = newhead->next;
    }
    return true;;
}



ListNode* partition(ListNode* pHead, int x)
{
    ListNode* ghead, * lhead, * gtail, * ltail, * cur;
    ghead = gtail = (ListNode*)malloc(sizeof(ListNode));
    ltail = lhead = (ListNode*)malloc(sizeof(ListNode));
    cur = pHead;
    while (cur)
    {
        if (cur->val < x)
        {
            ltail->next = cur;
            ltail = ltail->next;
            cur = cur->next;
        }
        else
        {
            gtail->next = cur;
            gtail = gtail->next;
            cur = cur->next;
        }
    }
    ltail->next = ghead->next;
    ListNode* tmp = lhead->next;
    //不置空，可能出现环
    gtail->next = NULL;
    free(ghead);
    free(lhead);
    return tmp;
}
};




struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
    struct ListNode* cur1 = headA;
    struct ListNode* cur2 = headB;
    for (cur1; cur1 != NULL; cur1 = cur1->next)
    {
        for (cur2; cur2 != NULL; cur2 = cur2->next)
        {
            if (cur1 == cur2)
            {
                return cur1;
            }
        }
        cur2 = headB;
    }
    return NULL;
}