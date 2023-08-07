#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int max = 0;
//    int sec = 0;
//    int tmp = 0;
//    int* p = nums;
//    while (p < nums + numsSize)
//    {
//        if (*p == 1)
//        {
//            max++;
//        }
//        else if (max > sec)
//        {
//            sec = max;
//            max = 0;
//        }
//        else
//            max = 0;
//        p++;
//    }
//    if (max > sec)
//        sec = max;
// 
//    return sec;
//}
//
//
//int main()
//{
//    int arr[] = { 1,1,0,1,1,1 };
//    int b = findMaxConsecutiveOnes(arr, 6);
//    printf("%d", b);
//	return 0;
//}


//int main()
//{
//    int n;
//    int num = 1;
//    int count = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        num = 0;
//        for (int j = 1; j <= i; j++)
//        {
//            if (i % j == 0)
//            {
//                num += (i / j);
//            }
//        }
//        if (num - i == i)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}


int removeDuplicates(int* nums, int numsSize)
{
    int* str = nums + 1;
    int* dst = nums + 1;
    int count = 1;
    for (str; str < nums + numsSize; str++)
    {
        if (*str != *(str - 1))
        {
            *dst = *str;
            dst++;
            count++;
        }
    }
    return count;
}


