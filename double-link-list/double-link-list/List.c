#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"


void LTPushBack(LTNode* phead, LTDataType x)          //Î²²å
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	LTNode* tail = phead->prev;

	newnode->prev = tail;
	tail->next = newnode;

	newnode->next = phead;
	phead->prev = newnode;



//	LTInsert(phead->next, x);
}


LTNode* BuyLTNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit (-1);
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->prev = phead;
	phead->next = phead;

	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);

	printf("phead<=>");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
		
	}
}



void LTPopBack(LTNode* phead)                     //Î²É¾
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;

	tailprev->next = phead;
	phead->prev = tailprev;

	free(tail);
	tail = NULL;


//	LTErase(phead->prev);
}


void LTPushFront(LTNode* phead, LTDataType x)     //Í·²å
{
	assert(phead);

	LTNode* frist = phead->next;
	LTNode* newnode = BuyLTNode(x);

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = frist;
	frist->prev = newnode;


//	LTInsert(phead->next, x);
}


void LTPopFront(LTNode* phead)                  //Í·É¾
{
	assert(phead);
	assert(phead->next!=phead);

	LTNode* next = phead->next;
	LTNode* sec = next->next;

	phead->next = sec;
	sec->prev = phead;

	free(next);
	next = NULL;

//	LTErase(phead->next);
}


int LTSize(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	int num = 0;
	while (cur != phead)
	{
		cur = cur->next;
		num++;
	}
	return num;
}


void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
	LTNode* front = pos->prev;

	newnode->next = pos;
	newnode->prev = front;

	front->next = newnode;
	pos->prev = newnode;
}



void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* pospres = pos->prev;
	LTNode* posnext = pos->next;

	free(pos);
	pos = NULL;

	pospres->next = posnext;
	posnext->prev = pospres;
}
