
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


	//���򽨴�ѣ�����С��
	//ԭ���Ѹ��ŵ����һ��λ�ã���������С�Ѿ��ǰ���Сֵ���ں��棬��Ѿ��ǰ����ֵ���ں���


	//���ϵ�������
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

	//���µ�������
	//O(N-log(N+1))=>O(N)
	//for (int i = (size-2)/2; i >=0; i--)     //�ӵ�����һ���Ҷ�ӽڵ㿪ʼ����
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
	//������
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
		//���Լ����õĵط�����������ļ���
	}
	fclose(fin);
}




void TestTopk(const char* filename,int k)
{
	//ȡ��ǰk����
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
		//���ļ��е��������뵽�Լ����õĵط�
	}

	

	//1.��ǰk������С��
	for ( int i = (k-2)/2;i >=0; i--)
	{
		AdjustDown(minheap, i, k);
	}
	//2.��ʣ������Ѷ��Ƚ�
	int x = 0;
	while (fscanf(fout, "%d", &x)!=EOF)
	{
		if (x > minheap[0])
		{
			//�滻����
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