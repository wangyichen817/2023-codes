#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20];
//	memcpy(arr2, arr1, 40);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}

//memcpy函数：用于两个不相关的数组拷贝，函数结束，返回目标空间的起始地址
//void* my_memcpy(void* dest, const void* stc, size_t num)
//{
//	assert(dest && stc);//有解引用，断言
//	void* tmp = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)stc;
//		dest = (char*)dest + 1;//void*类型无法运算，因此需要强转(强转都是临时的)运算，
//		stc = (char*)stc + 1;
//	}
//	return tmp;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20];
//	my_memcpy(arr2, arr1, 40);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}

//memmove函数：比memcpy强大，也可以用于相关的函数拷贝
//void* my_memmove(void* dest, const void* stc, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		//目标在起点左边，从前向后拷贝
//		if (dest < stc)
//		{
//			*(char*)dest = *(char*)stc;
//			dest = (char*)dest + 1;
//			stc = (char*)stc + 1;
//		}
//		//目标在右边，从后往前拷贝
//		else 
//		{
//			*((char*)dest + num) = *((char*)stc + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+2, 20);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,23,45,31 };
//	int num=memcmp(arr1, arr1 + 2, 20);
//		printf("%d ", num);
//	return 0;
//}

int main()
{
	char arr1[] = "hello,world";
	 memset(arr1+2, 'x', 3);
	printf("%s", arr1);
	return 0;
}