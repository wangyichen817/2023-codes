
#include"Heap.h"


void test01()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp, 2);
	HeapPush(&hp, 7);
	HeapPush(&hp, 6);
	HeapPush(&hp, 8);
	HeapPush(&hp, 9);
	HeapPush(&hp, 1);
	HeapPush(&hp, 20);
	HeapPush(&hp, 3);

	
	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}


}


void HeapSort(int* a, int size)
{
	//HP hp;
	//HeapInit(&hp);
	//for (int i = 0; i < size; i++)
	//{
	//	HeapPush(&hp, a[i]);
	//}
	//HeapPrint(&hp);
	//printf("\n");

	//int i = 0;
	//while (!HeapEmpty(&hp))
	//{
	//	a[i++] = HeapTop(&hp);
	//	HeapPop(&hp);
	//}
	//
	//HeapDestroy(&hp);

	//建堆
	for (int i = 0; i < size; i++)
	{
		AdjustUp(a, i);
	}
	int end = size - 1;
	//升序，向下调整
	while (end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
	}

}


int main()
{
//	test01();
	int a[] = { 1,5,4,6,52,13,59,8,10,23,21,12 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	return 0;
}