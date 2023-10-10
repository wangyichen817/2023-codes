
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


	//升序建大堆，降序建小堆
	//原理：把根放到最后一个位置，依次排序，小堆就是把最小值放在后面，大堆就是把最大值放在后面


	//向上调整建堆
	// O(N*log(N))
	for (int i = 0; i < size; i++)
	{
		AdjustUp(a, i);
	}
	int end = size - 1;
	while (end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		--end;
	}

	//向下调整建堆
	//O(N-log(N+1))=>O(N)
	//for (int i = (size-2)/2; i >=0; i--)     //从倒数第一格非叶子节点开始调整
	//{
	//	AdjustDown(a, i, size);
	//}
	// 
	//int end = size - 1;
	////N*log(N)
	//while (end > 0)
	//{
	//	Swap(&a[0], &a[end]);
	//	AdjustDown(a, 0, end);
	//	--end;
	//}

}


void CreateNDate()
{
	//造数据
	int n = 10000;
	srand(time(0));
	char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (file == NULL)
	{
		perror("fopen error");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		int x = rand() % 1000000;
		fprintf(fin,"%d\n", x);
		//从自己设置的地方把数据输出文件中
	}
	fclose(fin);
}




void TestTopk(const char* filename,int k)
{
	//取出前k个数
	FILE* fout = fopen(filename, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}
	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc error");
		return;
	}
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
		//把文件中的数据输入到自己设置的地方
	}

	

	//1.用前k个数建小堆
	for ( int i = (k-2)/2;i >=0; i--)
	{
		AdjustDown(minheap, i, k);
	}
	//2.将剩余数与堆顶比较
	int x = 0;
	while (fscanf(fout, "%d", &x)!=EOF)
	{
		if (x > minheap[0])
		{
			//替换进堆
			minheap[0] = x;
			AdjustDown(minheap, 0, k);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}
	printf("\n");
	fclose(fout);
}






int main()
{
//	test01();
	//int a[] = { 1,5,4,6,52,13,59,8,10,23,21,12 };
	//HeapSort(a, sizeof(a) / sizeof(a[0]));
	//CreateNDate();
	TestTopk("data.txt",10);
	return 0;
}