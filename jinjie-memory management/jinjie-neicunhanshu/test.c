#include<stdio.h>
#include<stdlib.h>

//动态申请的内存空间不会自动销毁，
// 除非   1.free   2.程序结束

//malloc:开辟空间
//int main()
//{
//	//int arr[10];
//	int* p=(int*)malloc(40);//成功返回起始地址，失败返回空指针，例：开辟40个字节
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
// 释放空间必须从开辟空间的起始地址开始
//	p = NULL;
//	return 0;
//}


//calloc:开辟空间并会初始化
//int main()
//{
//	//int arr[10];
//	int* p = (int*)calloc(40,sizeof(int));//成功返回起始地址，失败返回空指针，例：为40个sizeof(int)大小的元素开辟空间
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


//realloc:调整动态内存空间大小
int main()
{
	int* p = (int*)malloc(40);//成功返回起始地址，失败返回空指针，例：开辟40个字节空间，初始地址为p
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//初始化
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 1;
	}
	//增加内存空间
	int* ptr=(int*)realloc(p, 80);//判断内存空间是否开辟成功。例：将以p为初始地址所开辟的空间调整为80个字节大小
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