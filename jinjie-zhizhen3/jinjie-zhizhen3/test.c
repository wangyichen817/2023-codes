#include<stdio.h>
#include<string.h>
//int main()
//{
//	int* p = NULL;
//	int** p1 = &p;
//	printf("%p\n", p );   //00000000
//	printf("%p\n", p1);//0073FDB0
//	return 0;
//}

//字符指针
//int main()
//{
//	/*char ch = 'w';
//	char* p = &ch;
//	*p = 'w';*/
//	char* chr = "hell0";
//	printf("%c", *chr);
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);   //00D5F81C
//	printf("%p\n", &arr);  //00D5F81C
//	printf("%p\n", arr+1); //00D5F820
//	printf("%p\n", &arr+1);//00D5F844
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//将arr数组的地址传给指针变量p
//	return 0;
//}

//一维数组传参
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//二维数组传参
//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//x
//{}
//void test(int arr[][5])//ok
//{}
//void test(int* arr)//x
//{}
//void test(int* arr[5])//x
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int** arr)//x
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}


//strlen函数；求字符串长度
//size_t my_strlen(const char* str)
//{
//	int num = 0;
//	while (*str != '\0')
//	{
//		num++;
//		str++;
//	}
//	return num;
//}
//
//int main()
//{
//	size_t sz = my_strlen("abc");
//	printf("%u", sz);
//	return 0;
//}

////strcpy函数：拷贝字符串
//char* my_strcpy(char* dest, const char* str)
//{
//	char* tmp = str;
// //assert(dest!=NULL);
//// assert(str!=NULL);
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;
//	return tmp;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//stract函数：进行字符串拼接
//void my_stract(char* arr1, const char* arr2)
//{
////	assert(arr1 );//有解引用操作，进行assert假设
////	assert(arr2 );
//	int sz = strlen(arr1);
//	char* tmp = arr1+sz;
//	while (*arr2!='\0')
//	{
//		*(tmp) = *arr2;
//		tmp++;
//		arr2++;
//	}
//	*(tmp) = *arr2;
//}
//
//int main()
//{
//	char arr1[20] = "HELLO";
//	char arr2[] = " world";
//	my_stract(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcmp函数：比较字符串大小
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (str1 == str2)
//	{
//		if (str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (str1 > str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char arr1[] = "HELLO";
//	char arr2[] = " world";
//	int num=my_strcmp(arr1, arr2);
//	printf("%d", num);
//	return 0;
//}


//strncpy函数：拷贝有限长度的字符串
//char* my_strncpy(char* dest, const char* str,int num)
//{
//	char* tmp = str;
//	assert(dest!=NULL);
//	assert(str!=NULL);
//	for (int i = 0; i < num; i++)
//	{
//		if (*str == '\0')//后续都补\0
//		{
//			for (i; i < num; i++)
//			{
//				*dest = '\0';
//				dest++;
//			}
//		}
//		else
//		{
//			*dest = *str;
//			dest++;
//			str++;
//		}
//	}
//
//
//	return tmp;
//}
//int main()
//{
//	char arr1[20] = "helloworld";
//	char arr2[] = "xx";
//	int num = 5;
//	my_strncpy(arr1, arr2,num);
//	printf("%s", arr1);
//	return 0;
//}

//strstr在字符串中查找字符串
//char* my_strstr(char* str1,char* str2)
//{
//	char* p = str1;
//	char* s2 = p;
//	char* s1 = str2;
//	while (*p)//整体遍历找第一个字符
//	{
//		//开始匹配
//		s1 = str2;
//		s2 = p;
//		while (*s2 == *s1 && *s1 && *s2 )//继续匹配的条件
//		{
//			s2++;
//			s1++;
//		}
//		if (*s1 == '\0')//匹配成功
//			return p;
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[20] = "helloworld";
//	char arr2[] = "wor";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s", ret);
//	else
//		printf("no");
//	return 0;
//}