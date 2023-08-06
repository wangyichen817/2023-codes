#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int count = 0;
//	int x = -1;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//	}
//	printf("%d", count);
//  return 0;
//}
//
//
//int com(const void* c1, const void* c2)
//{
//    return(*(int*)c1 - *(int*)c2);
//}
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int* arr = (int*)malloc(numsSize * sizeof(int));
//    int count = 0;
//    qsort(nums, numsSize, 4, com);
//    int left = 0;
//    int right = numsSize - 1;
//    int mid = 0;
//    int flag = 0;
//    int i = 0;
//    while (i <= numsSize)
//    {
//        left = 0;
//        right = numsSize - 1;
//        mid = 0;
//        while (left < right)
//        {
//            mid = (left + right) / 2;
//            if (nums[mid] < i)
//                left = mid;
//            else if (nums[mid] > i)
//                right = mid;
//            else
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            arr[count] = i;
//            count++;
//        }
//        i++;
//    }
//    returnSize = count;
//    return arr;
//}

int com(const void* c1, const void* c2)
{
    return(*(int*)c1 - *(int*)c2);
}
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    int* arr = (int*)malloc(numsSize * sizeof(int));
    int count = 0;
    qsort(nums, numsSize, 4, com);
    int* p1 = nums;
    int* p = p1;
    while (p1 < nums + numsSize)
    {
        if (*p1 != (p - nums + 1))
        {
            p = p1;
            p1++;
        }
        else
        {
            p1++;
            p++;
            continue;
        }
        if (*p1 > (p - nums + 1))
        {
            arr[count] = p - nums + 1;
            count++;
        }
    }
    returnSize = count;
    return arr;
}

int com(const void* c1, const void* c2)
{
    return(*(int*)c1 - *(int*)c2);
}


int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    int* arr = (int*)malloc(numsSize * sizeof(int));
    int count = 0;
    qsort(nums, numsSize, 4, com);
    int cur = 1;
    //找出1到nums[0]之间缺失的数
    while (cur < nums[0])
    {
        arr[count] = cur;
        count++;
        cur++;
    }
    //只要相邻两项之差不是1，则其之间的数就是缺失的数
    for (int i = 1; i < numsSize - 1; i++)
    {
        if (nums[i] - nums[i - 1] == 1)
        {
            continue;
        }
        else
        {
            cur = nums[i - 1] + 1;
            while (cur < nums[i])
            {
                arr[count] = cur;
                count++;
                cur++;
            }
        }
    }
    //找出n到nums[numsSize-1]之间缺失的数
    if (nums[numsSize - 1] < numsSize)
    {
        cur = nums[numsSize - 1] + 1;
        while (cur <= numsSize)
        {
            arr[count] = cur;
            count++;
            cur++;
        }
    }
    *returnSize = count;
    return arr;
}

int main()
{
    int arr[] = { 4,3,2,7,8,2,3,1 };
    int* c = NULL;
    int* d = NULL;
    d=findDisappearedNumbers(arr, 8, c);
    return 0;
}




int Add(int num1, int num2) {
    //a+b= (a^b)  +  (a&b)<<1
    while (num2 != 0) {
        int temp = num1;
        num1 = num1 ^ num2;
        num2 = ((temp & num2) << 1);
    }
    return num1;
}