#include<stdio.h>



//�����ṹ�����ͣ�ֻ���ں��洴������
//struct s1
//{
//	int a;
//	char b;
//}x = { 100,'x' }, y = {.b = 'd',.a = 90 };//x��ȫ�ֱ���

//int main()
//{
//	printf("%d %c", x.a, y.b);
//	return 0;
//}

//������+�ṹ��Ƕ�׶���
//typedef struct s2
//{
//	int a;
//	struct s1 n1;
//	int arr[10];
//}s2;
//
//int main()
//{
//	 s2 x = { 100,{10,'c'},{1,2,3,4} };
//	 printf("%d %d %c ", x.a, x.n1.a, x.n1.b);
//	 for (int i = 0; i < 4; i++)
//		 printf("%d", x.arr[i]);
//	return 0;
//}



//�ṹ�崫��,��ô�ָ��(�ռ�С)
//struct S
//{
//	int a;
//	int data[10];
//};
//
//void print(struct S str1)
//{
//	printf("%d ", str1.a);
//}
//
//void print1(struct S* str1)
//{
//	printf("%d ", str1->a);
//}
//int main()
//{
//	struct S s = { 100,{1,2,3,4,5,6} };
//	print(s);
//	print1(&s);
//	return 0;
//}





//ö��(��ṹ��һ��������һ������)����������һһ�оٳ���,
//��;����������һ�ζ���������
//enum  color
//{
//	red,        //ö�ٵĶ��ǳ�����Ĭ��ֵΪ0,1,2,3....(�����Լ��趨)
//	green,
//	orange=20,
//	black
//};
//int main()
//{
//	//enum color c = red;
//	printf("%d ", red);
//	printf("%d ", green);
//	printf("%d ", black);
//	printf("%d ", orange);
//	return 0;
//}





//���ϣ�����һ���ڴ�ռ䣬���ͬһʱ��ֻ����һ����Ա����
//union U
//{
//	int i;
//	char a;
//};
//
//int main()
//{
//	union U un;
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.a));
//	printf("%p\n", &(un.i));
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}
