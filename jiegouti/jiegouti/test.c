#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct stu //��������
{
	int age;
	char name[20];
	char sex[20];
};
void st(struct stu* s)
{
	s->age = 20;
	//s->name[20] = "����";��//err
	//s->sex[20] = "nan";//err
	strcpy(s->name, "����");//�ṹ��������ֻ�ܿ���������ֱ�Ӹ�ֵ
}
int main()
{
//	struct stu zs = { 18,"����","��" };//��ʼ������

//	strcpy(zs.name, "����");//�ַ�����������"����"������zs.name��

	struct stu s= { 0 };
	st(&s);//�ṹ�崫����ô���ַ
	printf("%d %s %s", s.age, s.name, s.sex);
	return 0;
}