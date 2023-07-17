#include"contact.h"

//��ʽ��ͨѶ¼
void initcontact(contact* p)
{
	memset(p->data, 0, sizeof(p->data));
}

//������ϵ��
void Add(contact* pc)
{
	if (pc->sz == max)
	{
		printf("ͨѶ¼��Ա�ˣ�\n");
		return;
	}
		printf("����������:");
		scanf("%s", pc->data[pc->sz].name);
		printf("�������Ա�:");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������age:");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("������tele:");
		scanf("%s", pc->data[pc->sz].tele);
		printf("������addr:");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("�ɹ����ӣ�\n");
}

//��ʾ��ϵ��
void Show(const contact* p)
{
	int i = 0;
	printf("%s\t%s\t%s\t%s\t%s\n", "����","����","�Ա�","�绰","��ַ");
	for (i = 0; i < p->sz; i++)
	{
		printf("%s\t%d\t%s\t%s\t%s\n", p->data[i].name,
			                           p->data[i].age,
			                           p->data[i].sex, 
			                           p->data[i].tele, 
			                           p->data[i].addr);
	}
}


//����
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


//ɾ����ϵ��
void Del(contact* p)
{
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
		return;
	}
	char name1[20] = { 0 };
	int pos = 0;
	int flag = 0;
	printf("������Ҫɾ�������֣�");
	scanf("%s", name1);
	//����
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("���޴���");
		return;
	}
	//ɾ��
	for (int i = ret; i < p->sz-1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void Search(const contact* p)
{
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
		return;
	}
	char name1[20] = { 0 };
	int pos = 0;
	int flag = 0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", name1);
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("%s\t%s\t%s\t%s\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%s\t%d\t%s\t%s\t%s\n", p->data[ret].name,
			p->data[ret].age,
			p->data[ret].sex,
			p->data[ret].tele,
			p->data[ret].addr);
}
   
//������ϵ��
void Modify(contact* p)
{
	char name1[20];
	printf("��������Ҫ�޸ĵ���ϵ��;\n");
	scanf("%s", name1);
	int ret = findby_name(p, name1);
	if (ret == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("����������:");
	scanf("%s", p->data[ret].name);
	printf("�������Ա�:");
	scanf("%s", p->data[ret].sex);
	printf("������age:");
	scanf("%d", &(p->data[ret].age));
	printf("������tele:");
	scanf("%s", p->data[ret].tele);
	printf("������addr:");
	scanf("%s", p->data[ret].addr);
	printf("�޸ĳɹ���\n");
}

//��ϵ������
void Sort(contact* p, int sz)
{
	qsort(p->data, sz, sizeof(p->data[0]), strcmp);
	printf("�������\n");
	Show(p);
}