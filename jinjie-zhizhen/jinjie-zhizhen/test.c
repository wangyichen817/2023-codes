#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ָ�룬(*p)��ʾpΪָ�룬int [10]Ϊ�������ͣ�����int(*p)[10]Ϊ��������ָ��
//	                   //int(*)[10]��&arr�����ͣ�p�Ǳ�����
//	//printf("%p", p);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);//�������
//		printf("%d ", *(arr + i));//��Ԫ�ص�ַ����
//		printf("%d ", *((*p) + i));//�����������ַ����
//		printf("%d ", (*p)[i]);//�����ַ����
//	}
//	return 0;
//}
//


////��ά���鴫��
//void print(int arr[3][5], int r, int c)//ֱ�Ӵ�ӡ
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
//void print(int(*arr)[5], int r, int c)//��������ָ��
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
////һά���鴫�Σ��ββ��ֿ���ʹ����Ҳ������ָ��
//void test1(int arr[5],int sz)//������ʽ
//{}
//void test2(int* p, int sz)//ָ����ʽ
//{}
//void test3(int arr[3][5],int r,int c)//������ʽ
//{}
//void test4(int (*p)[5],int r,int c)//ָ����ʽ
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
////����ָ��-ָ������ָ��
////����ָ��-ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p", add);//�������Ǻ����ĵ�ַ
//	printf("%p", &add);//&������Ҳ�Ǻ����ĵ�ַ
//	
//	int (*p)(int x, int y) = &add;//p�Ǻ���ָ�������int (int x, int y)�Ǻ���ָ������
//	int r = add(4, 5);
//	int r = (*p)(4, 5);
//	int r = p(4, 5);
//	//�����ֶ�����
//	printf("%d", r);
////������ָ������
//	return 0;
//}


//���Ͼ���
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
//		printf("���ڣ�\n");
//	else
//		printf("������");
//	return 0;
//}

//�ַ�������
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

//�ַ����������
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