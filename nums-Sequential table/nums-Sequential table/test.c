#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"


int main()
{
    SL s;
    SLinit(&s);
    SLPushBack(&s, 1);
    SLPushBack(&s, 2);
    SLPushBack(&s, 3);
    SLPushBack(&s, 4);
    SLPushFront(&s, 0);
    SLPopFront(&s);
    SLPushFront(&s, 10);
    SLPopFront(&s);
    SLPushFront(&s, 20);
    SLPopFront(&s); 
    SLPushFront(&s, 30);
    SLPopFront(&s);
    SLInsert(&s, 2, 10);
    SLErase(&s, 2);
    print(&s);
	return 0;
}




















//时间复杂度：O(N)
//空间复杂度：O(N)
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    int* tmp = (int*)malloc(sizeof(int) * numsSize);//建立n个变量大小的空间
//    if (tmp == NULL)
//    {
//        perror("retate");
//        return;
//    }
//    memcpy(tmp, nums + numsSize - k, sizeof(int) * k);//拷贝k次
//    memcpy(tmp + k, nums, sizeof(int) * (numsSize - k));//拷贝n-k次
//    memcpy(nums, tmp, sizeof(int) * numsSize);//拷贝n次
//    free(tmp);
//    tmp = NULL;
//}
//
//
////时间复杂度：O(N)
////空间复杂度：O(1)
//void reverse(int* nums, int begin, int end)
//{
//    int temp;//建立一个临时中转变量
//    while (begin < end)//循环(begin-end)/2次
//    {
//        temp = nums[begin];
//        nums[begin] = nums[end];
//        nums[end] = temp;
//        begin++;
//        end--;
//    }
//}
//void rotate(int* nums, int len, int k)
//{
//    reverse(nums, 0, len - 1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, len - 1);
//}
