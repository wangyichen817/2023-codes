#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//    char arr[10001];
//    char tmp[10001];
//    int flag = 1;
//    gets(arr);
//    int len = strlen(arr);
//    char* begin = arr + len - 1;
//    int count = 0;
//    char* str = begin;
//    //把不是字母的位置置为空格，并倒序排列
//    while (begin >= arr)
//    {
//        if ((*begin < 91 && *begin>59) || (*begin > 96 && *begin < 123))
//        {
//            tmp[count] = *begin;
//            flag = 1;
//            count++;
//        }
//        else if (flag == 0)
//        {
//            begin--;
//        }
//        else
//        {
//            tmp[count] = ' ';
//            count++;
//            flag = 0;
//        }
//        begin--;
//    }
//
//    //分批次打印字符串
//    begin = tmp;
//    int num = 0;
//    while (begin <= tmp + count - 1)
//    {
//        if (*begin == ' ')
//        {
//            str = begin;;
//            while (num--)
//            {
//                str--;
//                printf("%c", *str);
//            }
//            printf(" ");
//        }
//        num++;
//        if (begin == tmp + count - 1)
//        {
//            str = begin;
//            while (*str != ' ')
//            {
//                printf("%c", *str);
//                str--;
//            }
//        }
//        begin++;
//    }
//    return 0;
//}


int main()
{
	char arr[10001];
	gets(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	//找左边界
	while (arr[left] < 'A' || (arr[left] > 'Z' && arr[left] < 'a') || arr[left] > 'z')
	{
		left++;
	}
	//找右边界
	while (arr[right] < 'A' || (arr[right] > 'Z' && arr[right] < 'a') || arr[right] > 'z')
	{
		right--;
	}
	//将非字母转化为空格
	for (int i = left; i <= right; i++)
	{
		if (arr[i] < 'A' || (arr[i] > 'Z' && arr[i] < 'a') || arr[i] > 'z')
			arr[i] = ' ';
	}
	//分段输出字符串
	for (int i = right; i >= left; i--)
	{
		if (arr[i] == ' ')
		{
			printf("%s ", &arr[i + 1]);
			arr[i] = '\0';
		}
	}
	printf("%s", &arr[left]);
	return 0;
}



























//int main()
//{
//    char arr[10001];
//    int flag = 1;
//    gets(arr);
//    int len = strlen(arr);
//    char* end = arr + len - 1;
//    char* str = end;
//    while (str--)
//    {
//        if ((*str > 90 && *str < 97) || *str > 123 || *str < 65)
//            break;
//    }
//    while (str < end)
//    {
//        print("%c", *str);
//        str++;
//    }
//
//    return 0;
//}




//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int num = n;
//        int count = 0;
//        while (num / 10)
//        {
//            count++;
//            num = num / 10;
//        }
//        for (int i = 0; i <= count; i++)
//        {
//            printf("%d", n / (int)pow(10, i) % 10);
//        }
//    }
//    return 0;
//}