#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int max(int a, int b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//int min(int a, int b)
//{
//	if (a >= b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	num = a > b ? a:b;
//	while (1)
//	{
//		if (num % a == 0 && num % b == 0)
//		{
//			printf("%d\n", num);
//			break;
//		}
//		
//		num+= (a > b ? a : b) % (a < b ? a : b);
//	}
//	return 0;
//}

//void revse(char arr[], int num)
//{
//	int left = arr[0];
//	int right = num - 1;
//	while (left <= right)
//	{
//		arr[left] = arr[right];
//		left++;
//		right--;
//	}
//}
void revse(char* left , char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] ;
	//scanf("%c", &arr);scanf遇到空格直接结束
	//fget(arr, 100, stdin);
	gets(arr);
	int right = strlen(arr)-1;
	revse(arr,arr+right);//翻转整个字符串
	char* start = arr;//翻转单词
	char* cur = arr;
	while (*cur)
	{
		while (cur != ' '&&cur!='\0')
		{
			cur++;
		}
		revse(start, cur - 1);
		start = cur + 1;
		if(*cur==' ')
		cur++;
	}
	printf("%s", arr);
	return 0;
}