#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    long n = 0, k = 0;
//    while (~scanf("%ld %ld", &n, &k))
//    {
//        if (k == 0)
//        {
//            printf("%ld\n", n * n);
//            continue;
//        }
//        long count = 0;
//        for (long y = k + 1; y <= n; y++)
//        {
//            long ret = n % y < k ? 0 : n % y - (k - 1);
//            count += (y - k) * (n / y) + (ret);
//        }
//        printf("%ld\n", count);
//    }
//    return 0;
//}
//
//
//
//
//int main()
//{
//    char arr[10001];
//    scanf("%s", arr);
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}




#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct ListNode {
    int val;
    struct ListNode* next;
};


//递归时，head1->next在变，head1也在变，因此head1->next == head1满足不了
int serach(struct ListNode* head1)
{
    if (head1 == NULL)
    {
        return 0;
    }
    else if (head1->next == head1)
    {
        return 1;
    }
    return serach(head1->next);
}

bool hasCycle(struct ListNode* head)
{
    int num = serach(head);
    if (num == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

    //赋值
    n1->val = 3;
    n2->val = 2;
    n3->val = 0;
    n4->val = -4;

    //连接链表
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;


    struct ListNode* head = hasCycle(n1);


    return 0;
}