#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 
#include<stdlib.h>

//计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//
//}
//int main()
//{
//	int( *pf1 )(int, int) = add;
//	int( *pf2 )(int, int) = sub;
//	int( *pf3 )(int, int) = mul;
//	int( *pf4 )(int, int) = div;
//	//函数指针数组
//	int(*pfarr[4])(int, int) = { add,sub,mul,div };
//
//	return 0;
//}

//void menu()
//{
//	printf("*******************\n");
//	printf("******0.exit*******\n");
//	printf("***1.add   2.sub***\n");
//	printf("***3.mul   4.div***\n");
//	printf("*******************\n");
//}
//
////回调函数；通过调用函数指针来实现被调用函数的功能
//void crl(int(*p)(int, int))//形参为函数指针，p为函数指针，指向被调用函数
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入操作数：");
//	scanf_s("%d %d", &a, &b);
//	int ret = p(a, b);//利用函数指针
//	printf("%d\n", ret);
//}

//int main()
//{
//	int num = 0;
//	do
//	{
//		menu();
//		scanf_s("%d", &num);
//		switch (num)
//		{
//		case 0:
//			printf("exit!\n");
//			break;
//		case 1:
//			crl(add);
//			break;
//		case 2:
//			crl(sub);
//			break;
//		case 3:
//			crl(mul);
//			break;
//		case 4:
//			crl(div);
//			break;
//		default:
//			printf("请重新输入：");
//		}
//	} while (num);
//	return 0;
//}

//函数指针数组的应用 - 转移表
//int main()
//{
//	int num = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf_s("%d", &num);
//		int(*ptarr[5])(int, int) = { 0,add,sub,mul,div };
//		if (num > 0 && num < 5)
//		{
//			printf("请输入操作数：");
//			scanf_s("%d %d", &a, &b);
//			ret = ptarr[num](a, b);
//			printf("%d\n", ret);
//		}
//		else if (num == 0)
//			printf("exit!\n");
//		else
//			printf("请重新输入：\n");
//	} while (num);
//	return 0;
//}






//void qsort (void* base, //指向了需要排序的数组的第一个元素
//           size_t num, //排序的元素个数
//           size_t size,//一个元素的大小，单位是字节
//           int (*cmp)(const void*, const void*)//函数指针类型 - 这个函数指针指向的函数，能够比较base指向数组中的两个元素
//           );

//void类型的指针可以接收任何类型的指针，但是不能直接进行解引用等操作

////qsort整形排序
//int cmplete(const void* p1, const void* p2)
//{
//	return(*(int*)p1 - *(int*)p2);
//}
void print(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

//void test1()
//{
//	int arr[] = { 0,7,9,8,6,5,4,3,5,2,4,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmplete);
//	print(arr, sz);
//}
//
////qsort结构体中数字排序
//struct stu 
//{
//	char name[20];
//	int age;
//};

//int comp(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}

//void test2()
//{
//	struct stu arr[] = { {"zhang",18},{"li",20},{"wang",12} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), comp);
//}
//
//int comp_name(const void* p1, const void* p2)
//{
//	return strcmp (((struct stu*)p1)->name , ((struct stu*)p2)->name);//strcmp比较字符串大小,
//}
//
////qsort结构体中字符串排序
//void test3()
//{
//	struct stu arr[] = { {"zhang",18},{"li",20},{"wang",12} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), comp_name);
//}


//测试整形比较
int cmp(void* p1, void* p2)//比较函数
{
	return(*(int*)p1 - *(int*)p2);
}

void swap(char* p1, char* p2,int size)//交换arr[j],arr[j+1]，一个字节一个字节交换
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < size; i++)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
void my_qsort(void* base, int sz, int size, int (*cmp)(void* , void* ))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			//假设升序cmp返回>0,交换
			if ((cmp((char*)base + size * j, (char*)base + size * (j + 1))) > 0)//比较大小,需要比较数的地址,用char为基础得到地址
			{
				swap((char*)base + size * j, (char*)base + size * (j + 1),size);
			}
		}
	}
}
void test()
{
	int arr[] = { 0,7,9,8,6,5,4,3,5,2,4,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp);
	print(arr,sz);
}

int main()
{
//	test1();
//	test2();
//	test3();
	test();
	return 0;
}