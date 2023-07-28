#include<stdio.h>
int add(int, int);
//1.预编译 2.编译 3.汇编 4.链接
//int main()
//{
//	int a = 10, b = 20;
//	int c=add(a, b);
//	printf("%d", c);
//	return 0;
//}、


//int main()
//{
//	
//	printf("%s\n", __FILE__);//进行编译的源文件
//	printf("%d\n", __LINE__);//文件中当前命令的行号
//	printf("%s\n", __DATE__);//编译文件的日期
//	printf("%s", __TIME__);//编译文件的时间
//	return 0;
//}

#define num 100
#define ch  "abc"
#define FOR   for(;;)

int main()
{
	printf("%d\n", num);
	printf("%s", ch);
	return 0;
}