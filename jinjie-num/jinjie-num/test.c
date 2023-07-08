#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//
//	float f = 5.5;
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int a = 0;
//	int b = 0;
//	scanf_s("%d",&num);
//	int arr[50];
//	for (int i = 0; i < num; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < num-1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//		{
//			a++;//升序+1
//		}
//		if (arr[i] <= arr[i + 1])
//		{
//			b++;//降序+1
//		}
//	}
//	if (a==num-1 || b==num-1)//全为升序，或者全为降序
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month != 2)
//		{
//			if ((month % 2 != 0&& month < 8)||( month % 2 == 0 && month >= 8))
//			{
//				day = 31;
//			}
//			else 
//			{
//				day = 30;
//			}
//		}
//		else
//		{
//			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))//闰年
//			{
//				day = 29;
//			}
//			else
//			{
//				day = 28;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


//int pdday(int y, int m)
//{
//	int d = 0;
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	d = arr[m];
//	if (m==2&&((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		d += 1;
//	return d;
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf_s("%d %d", &y, &m) == 2)
//	{
//		int d = pdday(y, m);
//		printf("%d\n", d);
//	}
//	return 0;
//}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	//int sz = strlen(arr);
	int right = 9;
	int tmp = 0;
	while (left < right)
	{
		//找到偶数
		while ((arr[left] % 2 == 1) && (left < right))
		{
			left++;
		}
		//找到奇数
		while ((arr[right] % 2 == 0) && (left < right))
		{
			right--;
		}
		//交换
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
		/*if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		left++;
		right--;*/
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}