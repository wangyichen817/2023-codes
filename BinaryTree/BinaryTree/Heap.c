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

void AdjustUp(HPDataType* a, int child)            //向上调整
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


void HeapPush(HP* php, HPDataType x)       //插入数据
{
	assert(php);

	//检查扩容
	if (php->capacity == php->size)
	{
		int newcap = php->capacity == 0 ? 4 : php->capacity * 2;                    //新容量
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcap); //对堆扩容
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		php->a = tmp;
		php->capacity = newcap;
	}
	//插入数据
	php->a[php->size] = x;
	php->size++;
	//调整位置
	AdjustUp(php->a, php->size-1);
}


void AdjustDown(HPDataType* a, int parent,int size)        //向下调整
{
	int lchild = parent * 2 + 1;
	int rchild = parent * 2 + 2;
	int minchild = lchild;

	//避免没有右孩子节点会越界的情况，以及防止右节点重复利用已删除的值
	if (lchild < size && rchild < size)
	{
		minchild = a[lchild] < a[rchild] ? lchild : rchild;
	}

	while (a[parent] > a[minchild] && minchild < size)   //父节点大于子节点中的最小节点，并且父节点不是叶节点(即左孩子存在)
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

	//向下调整
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