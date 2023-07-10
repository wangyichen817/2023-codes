#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct stu //定义类型
{
	int age;
	char name[20];
	char sex[20];
};
void st(struct stu* s)
{
	s->age = 20;
	//s->name[20] = "李四";、//err
	//s->sex[20] = "nan";//err
	strcpy(s->name, "李四");//结构体里数组只能拷贝，不能直接赋值
}
int main()
{
//	struct stu zs = { 18,"张三","男" };//初始化变量

//	strcpy(zs.name, "李四");//字符串拷贝，将"李四"拷贝进zs.name中

	struct stu s= { 0 };
	st(&s);//结构体传参最好传地址
	printf("%d %s %s", s.age, s.name, s.sex);
	return 0;
}