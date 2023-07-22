#include"contact.h"

//ͨѶ¼��0
//void initcontact(contact* p)
//{
//	memset(p->data, 0, sizeof(p->data));
//}
void initcontact(contact* p)
{
	p->data = (peoinfo*)malloc(3 * sizeof(peoinfo));
	if (p->data == NULL)
	{
		perror("initcontact");
		return;
	}
	p->sz = 0;
	p->cap = 3;	
	loadcontact(p);
}

//д��ͨѶ¼�����ļ��е�ͨѶ¼����д��ͨ��¼��
void loadcontact(contact* p)
{
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("initcontact");
		return;
	}
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))//fread����ץȡ�����ݸ�����û�з���0
	{
		//����Ƿ���Ҫ����
		int num = addplace(p);
		if (num == 0)
			return;
		p->data[p->sz] = tmp;
		p->sz++;

	}
	fclose(pf);
	pf = NULL;
}

//���ݣ���̬����
int addplace(contact* pc)
{
	if (pc->sz == pc->cap)
	{
		pc->data = (peoinfo*)realloc((void*)pc->data, (pc->cap + 2) * sizeof(peoinfo));
		if (pc->data == NULL)
		{
			perror("addplace");
			return 0;
		}
		pc->cap += 2;
		printf("���ݳɹ�\n");
		return 1;
	}
}

//1.������ϵ��
void Add(contact* pc)
{
	int num = addplace(pc);
	if (num == 0)
		return;
	//��̬���ӿռ�

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

//5.��ʾ��ϵ��
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


//��������(�ڹ���2��3�ж���Ҫ)
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


//2.ɾ����ϵ��
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

//3.������ϵ��
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
   
//4.������ϵ��
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

//6.��ϵ������
void Sort(contact* p, int sz)
{
	qsort(p->data, sz, sizeof(p->data[0]), strcmp);
	printf("�������\n");
	Show(p);
}

//0.�ͷ��ڴ�
void dest(contact* p)
{
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->cap = 0;
}

//0.д������:��ͨѶ¼�洢���ļ���
void writ(contact* p)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("writ");
		return;
	}
	//д��
	for (int i = 0; i < p->sz; i++)
	{
		fwrite(p->data+i, sizeof(peoinfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}