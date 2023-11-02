#include"sort.h"

int main()
{
	int a[] = { 6,1,2,7,9,3,4,5,10,8,12,11,24,645,323,65,42 };
	QuickSort(a, 0,sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));
	return 0;
}