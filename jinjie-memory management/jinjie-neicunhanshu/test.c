#include<stdio.h>
#include<stdlib.h>

//��̬������ڴ�ռ䲻���Զ����٣�
// ����   1.free   2.�������

//malloc:���ٿռ�
//int main()
//{
//	//int arr[10];
//	int* p=(int*)malloc(40);//�ɹ�������ʼ��ַ��ʧ�ܷ��ؿ�ָ�룬��������40���ֽ�
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
// �ͷſռ����ӿ��ٿռ����ʼ��ַ��ʼ
//	p = NULL;
//	return 0;
//}


//calloc:���ٿռ䲢���ʼ��
//int main()
//{
//	//int arr[10];
//	int* p = (int*)calloc(40,sizeof(int));//�ɹ�������ʼ��ַ��ʧ�ܷ��ؿ�ָ�룬����Ϊ40��sizeof(int)��С��Ԫ�ؿ��ٿռ�
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc:������̬�ڴ�ռ��С
int main()
{
	int* p = (int*)malloc(40);//�ɹ�������ʼ��ַ��ʧ�ܷ��ؿ�ָ�룬��������40���ֽڿռ䣬��ʼ��ַΪp
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//��ʼ��
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 1;
	}
	//�����ڴ�ռ�
	int* ptr=(int*)realloc(p, 80);//�ж��ڴ�ռ��Ƿ񿪱ٳɹ�����������pΪ��ʼ��ַ�����ٵĿռ����Ϊ80���ֽڴ�С
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;
	}
	else
	{
		perror("realloc");
		return 1;
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}