#include"seqlist.h"

void print(SL* s)
{
	for (int i = 0; i < s->size; i++)
		printf("%d ", s->a[i]);
}


void SLinit(SL* s)
{
	s->a = (SLDataType*)malloc(sizeof(SLDataType)*4);
	if (s->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	s->size = 0;
	s->capacity = 4;
}

void SLdestroy(SL* s)
{
	free(s->a);
	s->a = NULL;
}

void CheckData(SL* s)
{
	if (s->size == s->capacity)   //����Ҫ����
	{
		SLDataType* tmp = (SLDataType*)realloc(s->a, sizeof(SLDataType) * 2 * (s->capacity));//��s->a���ݣ���s->a���洢�������͵Ĵ�С����
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		s->a = tmp;
		s->capacity *= 2;
	}
}


void SLPushBack(SL* s, SLDataType x)
{
	CheckData(s);
	s->a[s->size] = x;
	s->size++;
}

void SLPopBack(SL* s)
{
	//������
	if (s->size == 0)
		return;
	//�������
	assert(s->size > 0);
	s->size--;
}

void SLPushFront(SL* s,SLDataType x)
{
	CheckData(s);

	//Ų������
	int end = s->size - 1;
	while (end >= 0)
	{
		s->a[end+1] = s->a[end];
		end--;
	}
	s->a[0] = x;
	s->size++;
}

void SLPopFront(SL* s)
{
	//ɾ������
	for (int i = 0; i < s->size-1; i++)
	{
		s->a[i] = s->a[i + 1];
	}
	s->size--;
}


void SLInsert(SL* s, int pos, SLDataType x)//ָ��λ�ò���
{
	CheckData(s);
	int end = s->size - 1;
	for (int i = end; i >=pos-1; i--)
	{
		s->a[i+1] = s->a[i];
	}
	s->a[pos - 1] = x;
	s->size++;
}

void SLErase(SL* s, int pos)
{
	int begin = pos - 1;
	for (int i = begin; i < s->size; i++)
	{
		s->a[i] = s->a[i + 1];
	}
	s->size--;
}