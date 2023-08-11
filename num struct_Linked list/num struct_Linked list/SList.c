#include"SList.h"


void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}

SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}



//易错点：不能直接把插入的链表地址给cur，cur是临时变量，需要给尾链表中的next
//如果头指针为空，则创建第一个链表时不能直接拷贝进形参，因此需要传二级指针
//改变int，用int*，改变int*，用int**，那么改变plist，用*plist

void SLTPushBack(SLTNode** pphead, SLTDataType x)     //尾插
{
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}

}



void SLTPushFront(SLTNode** pphead, SLTDataType x) //头插
{
	SLTNode* newnode = BuyListNode(x);//链表的地址
	newnode->next = *pphead;
	*pphead = newnode;
}



void SLTPopBack(SLTNode** pphead)      //尾删
{
	//1.空
	assert(*pphead);
	//2.一个节点
	//3.多个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
	}
	else
	{
		SLTNode* tailPre = NULL;     //尾删要把上一个节点中的指针置空，因此需要存放上一个节点的地址
		SLTNode* tail = *pphead;
		//while (tail->next)
		//{
		//	tailPre = tail;
		//	tail = tail->next;
		//}
		//free(tailPre->next);    //tailPre->next就是tail，都是指向的最后一个链表
		//tailPre->next = NULL;

		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}

}


void SLTPopFront(SLTNode** pphead) //头删
{
	//空
	assert(*pphead);
	//有链表
	SLTNode* cur = *pphead; //指向第一个，也就是将删除的
	*pphead = (*pphead)->next;
	free(cur);
	cur = NULL;
}



SLTNode* SLTFind(SLTNode* phead, SLTDataType x)                    //查找
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
			cur = cur->next;
	}
	return NULL;
}








void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)      //在pos之前插入
{
	assert(pos);
	//pos为第一个链表
	//pos不为第一个链表
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* cur = *pphead;
		SLTNode* newnode = BuyListNode(x);
		while (cur->next)                   //遍历找到pos的前一个链表
		{
			if (cur->next == pos)           //把前一个链表的next改为新链表
			{
				cur->next = newnode;
				break;
			}
			cur = cur->next;
		}
		newnode->next = pos;                //把新链表与后面的连接起来
	}
}


void SLTInsertAfter(SLTNode* pos, SLTDataType x)         //在pos之后插入
{
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}



void SLTEraseAfter(SLTNode* pos)                        //删除pos之后
{
	assert(pos);
	assert(pos->next);
	SLTNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
	cur = NULL;
}