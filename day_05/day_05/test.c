#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    for (int i = 1; i <= numsSize; i++)
//    {
//        if (nums[i - 1] != i)
//        {
//            returnSize[0] = nums[i-1];
//            returnSize[1] = i;
//        }
//    }
//}
//int main()
//{
//	int nums[] = { 1, 2, 2, 4 };
//	int len = sizeof(nums) / sizeof(nums[0]);
//	int arr1[2] = { 0 };
//    findErrorNums(nums, len, arr1);
//  return 0;
//}



#include <stdio.h>

int main() {
    int n;
    int fn = 0;
    int fb = 0;
    int fx = 0;
    int other = 0;
    char arr[101];
    scanf("%d", &n);
    while (n--)
    {
            scanf("%s", arr);
            if ((arr[0] < 49 && arr[0]>47) || strlen(arr) < 9)//2,4
            {
                printf("NO\n");
                continue;
            }
            for (int i = 0; arr[i]!='\0'; i++)//1
            {
                if (arr[i] > 47 && arr[i] < 58)
                    fn = 1;
                else if (arr[i] > 64 && arr[i] < 91)
                    fb = 1;
                else if (arr[i] > 96 && arr[i] < 123)
                    fx = 1;
                else
                {
                    other = 1;
                    break;
                }
            }
            if (other == 1)
            {
                printf("NO\n");;
                continue;
            }
            if (fn + fb + fx < 2)//3
            {
                printf("NO\n");;
                continue;
            }
            printf("YES\n");
    }
    return 0;
}

//�����������������������������λ������λ�Ƚϣ���ͬΪ0������Ϊ1��
//��������1�������Ʊ�ʾΪ 0001������2�������Ʊ�ʾΪ 0010����1��2������򣬽��Ϊ 0011���������ͬΪ0������Ϊ1�Ĺ���
//��λ�������& ���Ͱ�λ���ͬ����λ����������������λ��λ���бȽϣ���0Ϊ0������Ϊ1
//��������1����Ϊ���Ķ�������ֻ��1��1���������ұߣ���˿��԰����ǽ��бȽϡ�

int convertInteger(int A, int B)
{
    int c = A ^ B;
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (c & 1 == 1)
            count++;
        c >>= 1;
    }
    return count;
}