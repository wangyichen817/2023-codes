#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//复制带随机指针的链表
struct Node* copyRandomList(struct Node* head)
{
    struct Node* cur = head;

    //1.
    while (cur)
    {
        //拷贝节点插入原节点之后
        struct Node* next = cur->next;
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        cur->next = copy;
        copy->next = next;
        cur = next;
    }


    //2.
    cur = head;
    //置random
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }
        cur = cur->next->next;
    }

    //3.
    cur = head;
    struct Node* copyhead = NULL, * copytail = NULL;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;

        //copy节点尾插到新链表
        if (copytail == NULL)
        {
            copyhead = copytail = copy;
        }
        else
        {
            copytail->next = copy;
            copytail = copytail->next;
        }


        //恢复原链表
        cur->next = next;
        cur = next;
    }
    return copyhead;
}