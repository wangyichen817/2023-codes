#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组指针，(*p)表示p为指针，int [10]为数组类型，所以int(*p)[10]为存放数组的指针
//	                   //int(*)[10]是&arr的类型，p是变量名
//	//printf("%p", p);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);//数组访问
//		printf("%d ", *(arr + i));//首元素地址访问
//		printf("%d ", *((*p) + i));//解引用数组地址访问
//		printf("%d ", (*p)[i]);//数组地址访问
//	}
//	return 0;
//}
//


////二维数组传参
//void print(int arr[3][5], int r, int c)//直接打印
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int(*arr)[5], int r, int c)//利用数组指针
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", (*(arr + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}
//
////一维数组传参，形参部分可以使数组也可以是指针
//void test1(int arr[5],int sz)//数组形式
//{}
//void test2(int* p, int sz)//指针形式
//{}
//void test3(int arr[3][5],int r,int c)//数组形式
//{}
//void test4(int (*p)[5],int r,int c)//指针形式
//{}
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr, 5);
//	test2(arr, 5);
//	int arr[3][5] = { 0 };
//	test3(arr, 3, 5);
//	test4(arr, 3, 5);
//	return 0;
//}
//
////函数指针-指向函数的指针
////数组指针-指向数组的指针
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p", add);//函数名是函数的地址
//	printf("%p", &add);//&函数名也是函数的地址
//	
//	int (*p)(int x, int y) = &add;//p是函数指针变量，int (int x, int y)是函数指针类型
//	int r = add(4, 5);
//	int r = (*p)(4, 5);
//	int r = p(4, 5);
//	//这三种都可以
//	printf("%d", r);
////与数组指针相似
//	return 0;
//}


//杨氏矩阵
//int main()
//{
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			arr[i][j] = i+j-1;
////			printf("%d ", arr[i][j]);
//		}
////		printf("\n");
//	}
//	int num = 0;
//	scanf_s("%d", &num);
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			if (arr[i][j] == num)
//			{
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 1)
//		printf("存在！\n");
//	else
//		printf("不存在");
//	return 0;
//}

//字符串左旋
//void rese(char arr[], int num)
//{
//	int left = 0;
//	int right = num - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDE";
//	int num = 0;
//	scanf_s("%d", &num);
//	rese(arr, num);
//	printf("%s", arr);
//	return 0;
//}

//字符串交换结果
//int rese1(char arr[], char arr1[])
//{
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	char tmp = 0;
//	int count = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	/*for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] == arr1[i])
//			count++;
//		else
//			break;
//	}*/
//
//	left = 0;
//	right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] == arr1[left]&& arr[right] == arr1[right])
//			count++;
//		else
//			break;
//		left++;
//		right--;
//	}
//	return count;
//}
//


int rese1(char arr[], char arr1[])
{
	int sz = strlen(arr);
	int left = 0;
	int right = sz - 1;
	char tmp = 0;
	int count = 1;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < right ; j++)
		{
			tmp = arr[0];
			arr[j] = arr[j + 1];
			arr[right] = tmp;
		}
	}
	left = 0;
	right = sz - 1;
	for (int i = 0; i < right; i++)
	{
		if (arr[i] != arr1[i])
		{
			count = 0;
			break;
		}
	}
	return count;
}
int main()
{
	char arr[] = "AABCD";
	char arr1[] = "BCDAA";
	/*int num = 0;
	scanf_s("%d", &num);*/
	int n=rese1(arr, arr1);
	printf("%d", n);
	return 0;
}