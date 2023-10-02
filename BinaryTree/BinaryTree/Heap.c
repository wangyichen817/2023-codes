#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"




void HeapPrint(HP* php)
{
	assert(php);

	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
}

void HeapInit(HP* php)
{
	assert(php);
	php->capacity = 0;
	php->size = 0;
	php->a = NULL;
}

void Swap(HPDataType* a, HPDataType* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustUp(HPDataType* a, int child)            //���ϵ���
{
	int parent = (child - 1) / 2;
	while (a[parent] > a[child]&& child > 0)
	{
		Swap(&a[child], &a[parent]);
		child = parent;
		parent = (child - 1) / 2;
	}
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->capacity = php->size = 0;
}


void HeapPush(HP* php, HPDataType x)       //��������
{
	assert(php);

	//�������
	if (php->capacity == php->size)
	{
		int newcap = php->capacity == 0 ? 4 : php->capacity * 2;                    //������
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcap); //�Զ�����
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		php->a = tmp;
		php->capacity = newcap;
	}
	//��������
	php->a[php->size] = x;
	php->size++;
	//����λ��
	AdjustUp(php->a, php->size-1);
}


void AdjustDown(HPDataType* a, int parent,int size)        //���µ���
{
	int lchild = parent * 2 + 1;
	int rchild = parent * 2 + 2;
	int minchild = lchild;

	//����û���Һ��ӽڵ��Խ���������Լ���ֹ�ҽڵ��ظ�������ɾ����ֵ
	if (lchild < size && rchild < size)
	{
		minchild = a[lchild] < a[rchild] ? lchild : rchild;
	}

	while (a[parent] > a[minchild] && minchild < size)   //���ڵ�����ӽڵ��е���С�ڵ㣬���Ҹ��ڵ㲻��Ҷ�ڵ�(�����Ӵ���)
	{
		Swap(&a[minchild], &a[parent]);
		parent = minchild;
		lchild = parent * 2 + 1;
		rchild = parent * 2 + 2;
		minchild = lchild;
		if (lchild < size && rchild < size )
		{
			minchild = a[lchild] < a[rchild] ? lchild : rchild;
		}
	}
}

void HeapPop(HP* php)
{
	assert(php);
	assert(php->size>0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	//���µ���
	AdjustDown(php->a, 0,php->size);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}