#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include "add.h"

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	char arr1[5] = "1234";
//	printf("%d\n", strlen(arr));//strlen���س��ȣ���/0Ϊ�յ�
//	printf("%d\n", sizeof(arr));//sizeof������ռ�ڴ�
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(arr1));
//	return 0;
//}


//����������
//�β�
// void  swap(int* x, int* y)
//{
//	int tmp = *x;//tmp=a
//	*x = *y;//a=b
//	*y = tmp;//b=tmp
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	//char arr[] = "123456789101112";
//	//memset(&arr[3], 'a', 12);//�ӵ�ַarr[3]��ʼ������12���ַ���Ϊa
//	//printf("%s", arr);
//	int a, b;
//	scanf("%d %d", &a, &b);
//	//ʵ��
//	//��ʵ�δ����β�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//	swap(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}


 //дһ�������ж��Ƿ�Ϊ����
 /*int panduan(int x)
 {
	for (int i = 2; i < sqrt(x); i++)
	{
	
		if (x % i == 0)
			return 0;
	 }
		return 1;
 }

 int main()
 {
	 int a = 0;
	for(a=100;a<200;a++)
	 if (panduan(a) == 1)
	 {
		 printf("%d ", a);
	}
	 return 0;
 }*/




 //дһ�������������������е�Ԫ��
 //int birnum( int arr1[], int k)
 //{
	// int left = 0;
	// int right = (sizeof(arr1) / sizeof(arr1[0]))-1;
	// //�ҵ�����
	// while (left <= right)
	// {
	//	 int mid = left + (right - left) / 2;
	//	 if (arr1[mid] < k)
	//	 {
	//		 left = mid + 1;
	//	 }
	//	 else if (arr1[mid] > k)
	//	 {
	//		 right = mid - 1;
	//	 }
	//	 else
	//	 {
	//		 return mid;
	//	 }
	// }
	// //û�ҵ�����
	// return -1;
 //}
 //int main()
 //{
	// int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// int k = 5;
	// if (birnum(arr, k) == -1)
	// {
	//	 printf("û�ҵ�");
	// }
	// else
	// {
	//	 printf("�ҵ���,�±���%d", birnum(arr, k));
	// }
	// return 0;
 //}



 //дһ��������ÿ����һ��ʱnum��1
 //void test(int* num)
 //{
	// *num += 1;
 //}
 
 //int main()
 //{
	// int num = 0;
	// test(&num);
	// test(&num);
	// test(&num);
	// test(&num);
	// printf("%d", num);
	// return 0;
 //}

////�����Ķ���
//int add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c=add(a, b);//�����ĵ���  ����װ������������add.h�������add.c��
//	printf("%d\n", c);
//	return 0;
//}



//����һ��ֵ��˳���ӡÿλ
 /*void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x%10);
}
int main() 
{
	int num=0;
	scanf("%d", &num);
	print(num);
	return 0;
}*/



////����ַ����ĳ���
//int my_strlen(char* s)//()���ǵ�ַ
//{
//	if (*s == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(s + 1);
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len=my_strlen(arr);//����������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}



////n�Ľ׳�
//int fac(int x)
//{
//	if (x > 1)
//	{
//		x = x * fac(x - 1);//5*fac(4)
//	}
//	return x ;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//5
//	int c=fac(num);
//	printf("%d", c);
//	return 0;
//}



//����쳲�������
//int fbc(int x)//�ݹ�
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fbc(x - 1) + fbc(x - 2);
//}

//int fbc(int x)//����
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int k= fbc(num);
//	printf("%d", k);
//	return 0;
//}


//�˷���
//void group(int x)
//{
//	int a = 0;//��
//	int b = 0;//��
//	for (a = 1; a <= x; a++)
//	{
//		for (b = 1; b <=a; b++)
//		{
//			printf("%d*%d=%d  ", a, b, a * b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	
//	int num = 0;
//	scanf("%d", &num);
//	group(num);
//	return 0;
//}


//�����ж�
//void years(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		printf("%d������", x);
//	}
//	else
//	{
//		printf("%d��������", x);
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	years(year);
//	return 0;
//}

//int cifang(int x,int y)//xΪ�η���yΪ����
//{
//	if (x == 1)
//	{
//		return y;
//	}
//	else
//	{
//		return y * cifang(x-1,y);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int num=cifang(n, k);
//	printf("%d\n", num);
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int digitsum(int x)
//{
//	if (x / 10 == 0)
//	{
//		return x;
//	}
//	else
//	{
//		return (x%10) + digitsum(x / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int k=digitsum(num);
//	printf("%d\n", k);
//	return 0;
//}


//����
//void reverse(char* s ,int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 2;
//	char tmp = 0;
//	while (left < right)
//	{
//			tmp = s[left];
//			s[left] = s[right];
//			s[right] = tmp;
//			left++;
//			right--;
//	}
//	return;
//}


//���ַ����������Ż�ԭ����
int mystr(char* k)
{
	int count = 0;
	while (*k != '\0')
	{
		k++;
		count++;
	}
	return count;
}
void reverse(char* s)
{
	int left = 0;
	//int right = sizeof(s) / sizeof(s[0]) -2; // 4/1��ָ��Ĵ�С����Ԫ�صĴ�С
	int right = mystr(s);
	char tmp = 0;
	if (s[0] == '\0')
	{
		return;
	}
		tmp = s[left];
		s[left] = s[right-1];
		s[right-1] = '\0';
		if (mystr(s+1)>= 2)
			reverse(s + 1);
		s[right-1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	//scanf("%s", &arr);
	//int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
