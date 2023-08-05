#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//    int* arr = (int*)malloc((right - left + 1) * sizeof(int));
//    int num = left;
//    int count = 1;                          //位数
//    int tmp = 0;                            //每位数
//    int flag = 0;                           //记号
//    int p = 0;                              //返回数组中的元素个数
//    while (num <= right)
//    {
//        int s = num;
//        count = 1;
//        //判断位数
//        while (s / 10)
//        {
//            count++;
//            s /= 10;
//        }
//        //判断是否各位数都可整除
//        for (int i = 0; i < count; i++)
//        {
//            tmp = num / (int)pow(10, i) % 10;
//            if (tmp != 0 && num % tmp == 0)
//                flag = 1;
//            else
//            {
//                flag = 0;
//                break;
//            }
//        }
//        //加入数组
//        if (flag == 1)
//        {
//            arr[p] = num;
//            p++;
//        }
//        num++;
//    }
// //   *returnSize = p;
//    return arr;
//}





//除自身以外数组的乘积：对所有元素左乘一次，右乘一次，将结果存储起来，最后将所需的左乘右乘结果合并即可得到答案
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    int left[numsSize];
    int right[numsSize];
    left[0] = 1;
    //左乘
    for (int i = 1; i < numsSize; i++)
    {
        left[i] = nums[i - 1] * left[i - 1];
    }
    //右乘
    right[numsSize - 1] = 1;
    for (int i = numsSize - 1 - 1; i >= 0; i--)
    {
        right[i] = nums[i + 1] * right[i + 1];
    }

    for (int i = 0; i < numsSize; i++)
    {
        answer[i] = left[i] * right[i];
    }
    return answer;
}



int main()
{
    int a = 10, b = 22;
    int* c = 0;
    int* num=selfDividingNumbers(a, b, c);
	return 0;
}