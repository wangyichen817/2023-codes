#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�κ�����0���������������Լ������Ϊ0����˶��������鰴˳��������֮�󣬳���ż���ε���ȫΪ0���������ս�����ǳ��������ε��Ǹ���
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &num);
        res ^= num;
    }
    printf("%d", res);
    return 0;
}



int findPeakElement(int* nums, int numsLen)
{
    int i = 0;
    while (i < numsLen)
    {
        if (i != 0 && i != numsLen - 1)
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                return i;
            }
        }
        else if (i == 0 && nums[i] > nums[1])
        {
            return 0;
        }
        else if (i == numsLen - 1 && nums[numsLen - 1] > nums[numsLen - 2])
        {
            return numsLen - 1;
        }
        i++;
    }
    return 0;
}
