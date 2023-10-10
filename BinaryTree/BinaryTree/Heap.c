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
	int child = parent * 2 + 1;
	while (child<size)   //父节点大于子节点中的最小节点，并且父节点不是叶节点(即左孩子存在)
	{
		//找出小的孩子并保证没有右节点的情况下，小的为左孩子
		if (child + 1 < size && a[child] > a[child + 1])
		{
			child++;
		}

		//向下调整
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
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