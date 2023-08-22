#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void test1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPushFront(plist, 0);
	LTPopFront(plist);
	LTPopFront(plist);
	LTInsert(plist->next, 50);
	LTErase(plist->next);
	LTPrint(plist);
}


int main()
{
	test1();
	return 0;
}
















// 把相遇点断开，就变成了两个链表求相交
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//    struct ListNode* cur1 = headA;
//    struct ListNode* cur2 = headB;
//    int len1 = 0, len2 = 0;
//    //求出链表长度
//    while (cur1->next)
//    {
//        cur1 = cur1->next;
//        len1++;
//    }
//    while (cur2->next)
//    {
//        cur2 = cur2->next;
//        len2++;
//    }
//    if (cur2 != cur1)
//    {
//        return NULL;
//    }
//    //让长的先走，保证同步
//    int gap = abs(len1 - len2);
//    struct ListNode* longlist = headA, * shortlist = headB;
//    if (len1 < len2)
//    {
//        longlist = headB;
//        shortlist = headA;
//    }
//    while (gap--)
//    {
//        longlist = longlist->next;
//    }
//    //对比找出交点
//    while (longlist != shortlist)
//    {
//        longlist = longlist->next;
//        shortlist = shortlist->next;
//    }
//    return longlist;
//}
//struct ListNode* detectCycle(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    struct ListNode* flat = NULL;
//    struct ListNode* begin = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next;
//        slow = slow->next;
//        fast = fast->next;
//        //相遇
//        if (fast == slow)
//        {
//            flat = fast;
//            struct ListNode* newhead = flat->next;
//            flat->next = NULL;
//            return getIntersectionNode(head, newhead);
//        }
//    }
//    return NULL;
//}