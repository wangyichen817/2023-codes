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

//memcpy������������������ص����鿽������������������Ŀ��ռ����ʼ��ַ
//void* my_memcpy(void* dest, const void* stc, size_t num)
//{
//	assert(dest && stc);//�н����ã�����
//	void* tmp = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)stc;
//		dest = (char*)dest + 1;//void*�����޷����㣬�����Ҫǿת(ǿת������ʱ��)���㣬
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

//memmove��������memcpyǿ��Ҳ����������صĺ�������
//void* my_memmove(void* dest, const void* stc, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		//Ŀ���������ߣ���ǰ��󿽱�
//		if (dest < stc)
//		{
//			*(char*)dest = *(char*)stc;
//			dest = (char*)dest + 1;
//			stc = (char*)stc + 1;
//		}
//		//Ŀ�����ұߣ��Ӻ���ǰ����
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