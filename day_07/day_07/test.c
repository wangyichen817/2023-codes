#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int com(const char* c1, const char* c2)
//{
//    return(*(char*)c1 - *(char*)c2);
//}
//
//int main() {
//    char arr[10001];
//    scanf("%s", arr);
//    int len = strlen(arr);
//    qsort(arr, len, sizeof(char), com);
//    printf("%s", arr);
//    return 0;
//}


//int pivotIndex(int* nums, int numsSize)
//{
//    int tmp = 0;
//    int ltmp = nums[0];
//    for (int i = 1; i < numsSize; i++)//第一个下标
//    {
//        tmp += nums[i];
//    }
//    if (tmp == 0)
//        return 0;
//
//    tmp = 0;
//    for (int i = 1; i < numsSize; i++)
//    {
//        ltmp += nums[i];
//        tmp = 0;
//        for (int j = i; j < numsSize; j++)
//        {
//            tmp += nums[j];
//        }
//        if (ltmp == tmp)
//            return i;
//    }
//    return -1;
//}

//更好的方法，左右同时进行
//int pivotIndex(int* nums, int numsSize) {
//    if (numsSize == 0)
//        return -1;
//    int right = 0;
//    int left = 0;
//    for (int i = 1; i < numsSize; i++)
//        right = right + nums[i];
//    if (left == right)
//        return 0;
//    for (int j = 1; j < numsSize; j++) {
//        right = right - nums[j];
//        left = left + nums[j - 1];
//        if (left == right)
//            return j;
//    }
//    return -1;
//}

