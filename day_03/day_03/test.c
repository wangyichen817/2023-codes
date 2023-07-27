#include<stdio.h>
//int main() 
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[2001] = { 0 };
//    int count = 0;
//    int count1 = 0;
//    float result = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//        if (arr[i] < 0)
//            count++;
//        else if (arr[i] > 0)
//        {
//            result += arr[i];
//            count1++;
//        }
//    }
//    if (count1 == 0)
//        count1 = 1;
//    printf("%d %.1f", count, result / count1);
//
//    return 0;
//}


//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    int tmp = *nums;
//    int count = 0;
//    nums++;
//    while (*nums >= tmp)
//    {
//        nums++;
//        count++;
//    }
//    if (count + 1 == numsLen)
//        return tmp;
//    return *nums;
//}
//
//int main()
//{
//    int nums[6] = { 1,2,2,2,2,2 };
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    int r = minNumberInRotateArray(nums, sz);
//    printf("%d", r);
//    return 0;
//}