#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//    int* arr = (int*)malloc((right - left + 1) * sizeof(int));
//    int num = left;
//    int count = 1;                          //λ��
//    int tmp = 0;                            //ÿλ��
//    int flag = 0;                           //�Ǻ�
//    int p = 0;                              //���������е�Ԫ�ظ���
//    while (num <= right)
//    {
//        int s = num;
//        count = 1;
//        //�ж�λ��
//        while (s / 10)
//        {
//            count++;
//            s /= 10;
//        }
//        //�ж��Ƿ��λ����������
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
//        //��������
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





//��������������ĳ˻���������Ԫ�����һ�Σ��ҳ�һ�Σ�������洢������������������ҳ˽���ϲ����ɵõ���
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    int left[numsSize];
    int right[numsSize];
    left[0] = 1;
    //���
    for (int i = 1; i < numsSize; i++)
    {
        left[i] = nums[i - 1] * left[i - 1];
    }
    //�ҳ�
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