#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	//int a = 0x11223344;
//	//double* p = &a;
//	//*p = 0;//�����ú�ָ���������
//	int a1[] = { 1,2,3,4,5 };
//	int a2[] = { 2,3,4,5,6 };
//	int a3[] = { 3,4,5,6,7 };
//	int* p[] = { a1,a2,a3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ʹ��ָ���ӡ��������
//void print(int* s, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(s + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	
//	print(arr,sz);
//	return 0;
//}

//�ַ�������
//int main()
//{
//	char arr[10000];
//	gets(arr);
//	int i = 0;
//	for (i = strlen(arr) - 1; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char str[10001] = { '\0' };
//    while (gets(str))
//    {
//        int len = strlen(str);
//        for (int i = len - 1; i >= 0; i--) {
//            printf("%c", str[i]);
//        }printf("\n");
//    }
//}

//��ӡ����
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <7; i++)//��
//	{
//		for (int n = 0; n < 7-i; n++)// ǰ�ÿո�
//		{
//			printf("%c", ' ');
//		}
//		for (j = 0; j <=2*i ; j++)//ÿ����2*i-1��*
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	for (i = 7; i >=0; i--)//��
//	{
//		for (int n = 7-i; n>0; n--)// ǰ�ÿո�
//		{
//			printf("%c", ' ');
//		}
//		for (j = 2 * i; j >= 0; j--)//ÿ����2*i-1��*
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ˮ�ɻ���
//int main()
//{
//	int num = 0;
//	for (num = 0; num < 100000; num++)
//	{
//		int count = 0;//λ��
//		int tmp = 0;
//		int two = num;
//		while (two)//num��λ��
//		{
//			two = two / 10;
//			count++;
//		}
//		for (double i = 0; i < count; i++)//��������λ��
//		{
//			int gw = num / pow(10, i);
//			gw = gw % 10;//����ʮ����...λ��
//			tmp += pow(gw, count);
//		}
//		if (tmp == num)
//			printf("%d ", tmp);
//	}
//	return 0;
//}


//int main()
//{
//	int money = 20;
//	int bot = 0;//��ˮ
//	int glass = 0;//��ƿ
//	while (money)
//	{
//		money--; 
//		bot++;
//		glass++;
//		if (glass == 2)
//		{
//			bot += 1;
//			glass = 1;
//		}
//		
//	}
//	printf("%d", bot);
//	return 0;
//}
#include<assert.h>

//void copy(char* arr2, const char* arr1)//����*arr1���ܸı䣬��*arr1Ϊ����
//{
//	//����
//	assert(arr1 != NULL);//����Ϊ���򱨴�
//	assert(arr2 != NULL);
//
//	while (*arr1 != '\0')
//	{
//		*arr2 = *arr1;
//		arr2++;
//		arr1++;
//	}
//	*arr2 = *arr1;
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "xxxxxxxxxxxx";
//	char* p = NULL;
//	copy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int my_strlen(char const* arr)
//{
//	assert(arr != NULL);
//	int count=0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc0";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//�������кϲ�
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (int i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	//�ϲ�����
//	int arr3[n + m];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			k++;
//			j++;
//		}
//	}
//	if (i == n)
//	{
//		while (j < m)
//		{
//			arr3[k] = arr2[j];
//			k++;
//			j++;
//		}
//	}
//	else
//	{
//		while (i < n)
//		{
//			arr3[k] = arr1[i];
//			k++;
//			i++;
//		}
//	}
//	for (int s = 0; s < (n + m); s++)
//		printf("%d ", arr3[s]);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}



//int main()
//{
//	int a = 1;//&aΪ��һ���ֽڵĵ�ַ��int*�����÷����ĸ��ֽڣ�
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("С��\n");
//	else
//		printf("���");
//	return 0;
//}

