#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"


int main()
{
    SL s;
    SLinit(&s);
    SLPushBack(&s, 1);
    SLPushBack(&s, 2);
    SLPushBack(&s, 3);
    SLPushBack(&s, 4);
    SLPushFront(&s, 0);
    SLPopFront(&s);
    SLPushFront(&s, 10);
    SLPopFront(&s);
    SLPushFront(&s, 20);
    SLPopFront(&s); 
    SLPushFront(&s, 30);
    SLPopFront(&s);
    SLInsert(&s, 2, 10);
    SLErase(&s, 2);
    print(&s);
	return 0;
}




















//ʱ�临�Ӷȣ�O(N)
//�ռ临�Ӷȣ�O(N)
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    int* tmp = (int*)malloc(sizeof(int) * numsSize);//����n��������С�Ŀռ�
//    if (tmp == NULL)
//    {
//        perror("retate");
//        return;
//    }
//    memcpy(tmp, nums + numsSize - k, sizeof(int) * k);//����k��
//    memcpy(tmp + k, nums, sizeof(int) * (numsSize - k));//����n-k��
//    memcpy(nums, tmp, sizeof(int) * numsSize);//����n��
//    free(tmp);
//    tmp = NULL;
//}
//
//
////ʱ�临�Ӷȣ�O(N)
////�ռ临�Ӷȣ�O(1)
//void reverse(int* nums, int begin, int end)
//{
//    int temp;//����һ����ʱ��ת����
//    while (begin < end)//ѭ��(begin-end)/2��
//    {
//        temp = nums[begin];
//        nums[begin] = nums[end];
//        nums[end] = temp;
//        begin++;
//        end--;
//    }
//}
//void rotate(int* nums, int len, int k)
//{
//    reverse(nums, 0, len - 1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, len - 1);
//}
