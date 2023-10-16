#include"queue.h"

void QueueInit(Que* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}


void QueuePush(Que* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc error");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->tail == NULL)
	{
		pq->tail =pq->head= newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;

}


void QueuePop(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* cur = pq->head;
		pq->head = pq->head->next;
		free(cur);
		cur = NULL;
	}
	
	pq->size--;
}

QDataType QueueBack(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QDataType cur = pq->tail->data;
	return cur;
}
QDataType Queuefront(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QDataType cur = pq->head->data;
	return cur;
}

bool QueueEmpty(Que* pq)
{
	assert(pq);
	return pq->head == NULL;
}

int QueueSize(Que* pq)
{
	assert(pq);
	return pq->size;
}

void QueueDestroy(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}