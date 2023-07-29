#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//void rotate(int* nums,int len, int k)
//{
//    int left = 0;
//    int right = len - 1;
//    int tmp = 0;
//    while (left <= right)
//    {
//        tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//    left = 0;
//    right = k-1;
//    while (left <= right)
//    {
//        tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//    left = k;
//    right = len - 1;
//    while (left <= right)
//    {
//        tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}

//int com(const void* p1, const void* p2)
//{
//    return(*(int*)p1 - *(int*)p2);
//}
//
//int missingNumber(int* nums, int numsSize)
//{
//    int i = 0;
//    qsort(nums, numsSize, 4, com);
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != i)
//            return i;
//    }
//    return numsSize;
//}


int main()
{
	int nums[] = { 3,0,1 };
    int len = sizeof(nums) / sizeof(nums[0]);
   int l= missingNumber(nums,len);
		printf("%d", l);
	return 0;
}