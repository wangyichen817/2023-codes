#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//最少为其他数的两倍
//int com(const void* c1, const void* c2)
//{
//    return(*(int*)c1 - *(int*)c2);
//}
//int dominantIndex(int* nums, int numsSize)
//{
//    int arr[numsSize];
//    if (numsSize == 1)
//        return 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        arr[i] = nums[i];
//    }
//    qsort(arr, numsSize, 4, com);
//    if ((arr[numsSize - 1] < (2 * arr[numsSize - 2])))
//        return -1;
//    else
//    {
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (nums[j] == arr[numsSize - 1])
//                return j;
//        }
//    }
//    return -1;
//}



//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//    int count = 0;
//    if (nums1Size < nums2Size)
//    {
//        for (int i = 0; i < nums1Size; i++)
//        {
//            for (int j = 0; j < nums2Size; j++)
//            {
//                if (nums1[i] == nums2[j])
//                {
//                    returnSize[count] = nums1[i];
//                    count++;
//                }
//            }
//        }
//
//    }
//    else
//    {
//        for (int i = 0; i < nums2Size; i++)
//        {
//            for (int j = 0; j < nums1Size; j++)
//            {
//                if (nums2[i] == nums1[j])
//                {
//                    returnSize[count] = nums2[i];
//                    count++;
//                }
//            }
//        }
//
//    }
//    return returnSize;
//}

//排序，双指针遍历
//int com(const void* c1, const void* c2)
//{
//    return(*(int*)c1 - *(int*)c2);
//}

//void intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//    qsort(nums1, nums1Size, 4, com);
//    qsort(nums2, nums2Size, 4, com);
//    int count = 0;//返回数组的下标
//    int tmp = 0;//确保交集的唯一性
//    int* p1 = nums1;
//    int* p2 = nums2;
//    while (p1 < (nums1 + nums1Size) && p2 < (nums2 + nums2Size))//有一个数组遍历完成，则中止循环
//    {
//        if (*p1 < *p2)
//            p1++;
//        else if (*p1 > *p2)
//            p2++;
//        else
//        {
//            tmp = *p1;
//            p1++;
//            p2++;
//            if (tmp != returnSize[count])
//            {
//                returnSize[count] = tmp;
//                count++;
//            }
//        }
//    }
//}



int main()
{
    int arr1[] = { 1,2,3,4,5,6,7,8,9 };
    int arr2[] = { 1,2,3,4,5,2,1,8,10 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[20] = { 0 };
    intersection(arr1,len1,arr2,len2,arr3);
  return 0;
}