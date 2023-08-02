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
	if (s->size == s->capacity)   //满了要扩容
	{
		SLDataType* tmp = (SLDataType*)realloc(s->a, sizeof(SLDataType) * 2 * (s->capacity));//给s->a扩容，扩s->a所存储数据类型的大小倍数
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
	//温柔检查
	if (s->size == 0)
		return;
	//暴力检查
	assert(s->size > 0);
	s->size--;
}

void SLPushFront(SL* s,SLDataType x)
{
	CheckData(s);

	//挪动数据
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
	//删除数据
	for (int i = 0; i < s->size-1; i++)
	{
		s->a[i] = s->a[i + 1];
	}
	s->size--;
}


void SLInsert(SL* s, int pos, SLDataType x)//指定位置插入
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