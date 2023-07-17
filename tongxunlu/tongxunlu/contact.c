#include"contact.h"

//格式化通讯录
void initcontact(contact* p)
{
	memset(p->data, 0, sizeof(p->data));
}

//增加联系人
void Add(contact* pc)
{
	if (pc->sz == max)
	{
		printf("通讯录满员了！\n");
		return;
	}
		printf("请输入名字:");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入性别:");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入age:");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入tele:");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入addr:");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("成功增加！\n");
}

//显示联系人
void Show(const contact* p)
{
	int i = 0;
	printf("%s\t%s\t%s\t%s\t%s\n", "名字","年龄","性别","电话","地址");
	for (i = 0; i < p->sz; i++)
	{
		printf("%s\t%d\t%s\t%s\t%s\n", p->data[i].name,
			                           p->data[i].age,
			                           p->data[i].sex, 
			                           p->data[i].tele, 
			                           p->data[i].addr);
	}
}


//查找
int findby_name(contact* p, char name1[])
{
	for (int i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name1) == 0)
		{
			return i;
		}
	}
	return -1;
}


//删除联系人
void Del(contact* p)
{
	if (p->sz == 0)
	{
		printf("通讯录为空，无法操作\n");
		return;
	}
	char name1[20] = { 0 };
	int pos = 0;
	int flag = 0;
	printf("请输入要删除的名字：");
	scanf("%s", name1);
	//查找
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("查无此人");
		return;
	}
	//删除
	for (int i = ret; i < p->sz-1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("删除成功\n");
}

//查找联系人
void Search(const contact* p)
{
	if (p->sz == 0)
	{
		printf("通讯录为空，无法操作\n");
		return;
	}
	char name1[20] = { 0 };
	int pos = 0;
	int flag = 0;
	printf("请输入要查找的名字：");
	scanf("%s", name1);
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("%s\t%s\t%s\t%s\t%s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%s\t%d\t%s\t%s\t%s\n", p->data[ret].name,
			p->data[ret].age,
			p->data[ret].sex,
			p->data[ret].tele,
			p->data[ret].addr);
}
   
//更改联系人
void Modify(contact* p)
{
	char name1[20];
	printf("请输入你要修改的联系人;\n");
	scanf("%s", name1);
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("请输入名字:");
	scanf("%s", p->data[ret].name);
	printf("请输入性别:");
	scanf("%s", p->data[ret].sex);
	printf("请输入age:");
	scanf("%d", &(p->data[ret].age));
	printf("请输入tele:");
	scanf("%s", p->data[ret].tele);
	printf("请输入addr:");
	scanf("%s", p->data[ret].addr);
	printf("修改成功！\n");
}

//联系人排序
void Sort(contact* p, int sz)
{
	qsort(p->data, sz, sizeof(p->data[0]), strcmp);
	printf("排序完成\n");
	Show(p);
}