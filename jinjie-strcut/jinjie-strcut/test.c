#include<stdio.h>



//匿名结构体类型：只能在后面创建变量
//struct s1
//{
//	int a;
//	char b;
//}x = { 100,'x' }, y = {.b = 'd',.a = 90 };//x是全局变量

//int main()
//{
//	printf("%d %c", x.a, y.b);
//	return 0;
//}

//重命名+结构体嵌套定义
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



//结构体传参,最好传指针(空间小)
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





//枚举(与结构体一样，都是一种类型)：将可能性一一列举出来,
//用途：可以用来一次定义多个常量
//enum  color
//{
//	red,        //枚举的都是常量，默认值为0,1,2,3....(可以自己设定)
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





//联合：公用一块内存空间，因此同一时间只能用一个成员变量
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
