#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 
#include<stdlib.h>

//������
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
//	//����ָ������
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
////�ص�������ͨ�����ú���ָ����ʵ�ֱ����ú����Ĺ���
//void crl(int(*p)(int, int))//�β�Ϊ����ָ�룬pΪ����ָ�룬ָ�򱻵��ú���
//{
//	int a = 0;
//	int b = 0;
//	printf("�������������");
//	scanf_s("%d %d", &a, &b);
//	int ret = p(a, b);//���ú���ָ��
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
//			printf("���������룺");
//		}
//	} while (num);
//	return 0;
//}

//����ָ�������Ӧ�� - ת�Ʊ�
//int main()
//{
//	int num = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf_s("%d", &num);
//		int(*ptarr[5])(int, int) = { 0,add,sub,mul,div };
//		if (num > 0 && num < 5)
//		{
//			printf("�������������");
//			scanf_s("%d %d", &a, &b);
//			ret = ptarr[num](a, b);
//			printf("%d\n", ret);
//		}
//		else if (num == 0)
//			printf("exit!\n");
//		else
//			printf("���������룺\n");
//	} while (num);
//	return 0;
//}






//void qsort (void* base, //ָ������Ҫ���������ĵ�һ��Ԫ��
//           size_t num, //�����Ԫ�ظ���
//           size_t size,//һ��Ԫ�صĴ�С����λ���ֽ�
//           int (*cmp)(const void*, const void*)//����ָ������ - �������ָ��ָ��ĺ������ܹ��Ƚ�baseָ�������е�����Ԫ��
//           );

//void���͵�ָ����Խ����κ����͵�ָ�룬���ǲ���ֱ�ӽ��н����õȲ���

////qsort��������
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
////qsort�ṹ������������
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
//	return strcmp (((struct stu*)p1)->name , ((struct stu*)p2)->name);//strcmp�Ƚ��ַ�����С,
//}
//
////qsort�ṹ�����ַ�������
//void test3()
//{
//	struct stu arr[] = { {"zhang",18},{"li",20},{"wang",12} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), comp_name);
//}


//�������αȽ�
int cmp(void* p1, void* p2)//�ȽϺ���
{
	return(*(int*)p1 - *(int*)p2);
}

void swap(char* p1, char* p2,int size)//����arr[j],arr[j+1]��һ���ֽ�һ���ֽڽ���
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
			//��������cmp����>0,����
			if ((cmp((char*)base + size * j, (char*)base + size * (j + 1))) > 0)//�Ƚϴ�С,��Ҫ�Ƚ����ĵ�ַ,��charΪ�����õ���ַ
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