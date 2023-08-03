#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 字符个数统计
//int com(void* c1, void* c2)
//{
//    return (*(char*)c1 - *(char*)c2);
//}
//int main() {
//    char arr[501] = "0";
//    int count = 0;
//    scanf("%s", arr);
//    qsort(arr, strlen(arr), sizeof(char), com);
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] == arr[i + 1] && (i + 1 != strlen(arr)))
//            continue;
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}


//多数元素
//int com(const void* c1, const void* c2)
//{
//    return (*(int*)c1 - *(int*)c2);
//}
//int majorityElement(int* nums, int numsSize)
//{
//    int count = 0;
//    int flag = 0;
//    qsort(nums, numsSize, 4, com);
//    for (int i = 0; i < numsSize; i++)
//    {
//        count = 0;
//        if (nums[i] == nums[i + 1] && i + 1 != numsSize && flag == 1)
//        {
//            continue;
//        }
//        flag = 0;
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (nums[i] == nums[j])
//                count++;
//            flag = 1;
//        }
//        if (count > numsSize / 2)
//            return nums[i];
//    }
//    return 0;
//}


//int majorityElement(int* nums, int numsSize) {
//    int candidate = nums[0];//投票对象
//    int count = 1;//票数
//
//    for (int i = 1; i < numsSize; i++)//遍历投票对象
//    {
//        if (nums[i] == candidate)//投票对象相同，票数+1
//        {
//            count++;
//        }
//        else//投票对象不同，票数-1
//        {
//            count--;
//        }
//        if (count < 0)//该元素不是多数元素，更新投票对象candidate并把票数置1
//        {
//            candidate = nums[i];
//            count = 1;
//        }
//    }
//
//    return candidate;
//}

int main()
{
    int arr[] = { 2,1,11,1,1,3,2,2,2,2,2,2,2,2,54,4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int tmp=majorityElement(arr, len);
    printf("%d", tmp);
    return 0;
}