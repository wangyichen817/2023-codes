
#include"queue.h"

void test()
{
	Que pq;
	QueueInit(&pq);
	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);
	QueuePush(&pq, 5);
	while (!QueueEmpty(&pq))
	{
		printf("%d ", Queuefront(&pq));
		QueuePop(&pq);
	}
	QueueDestroy(&pq);

}

int main()
{
	test();
  return 0;
}