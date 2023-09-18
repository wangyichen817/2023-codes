#include"stack.h"


void test()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPush(&st, 5);
	while (!STEmpty(&st))
	{
		printf("%d", STTop(&st));
		STPop(&st);
	}
	printf("\n");
	STDestroy(&st);
}
int main()
{
	test();
  return 0;
}