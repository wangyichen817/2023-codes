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



//�״�㣺����ֱ�ӰѲ���������ַ��cur��cur����ʱ��������Ҫ��β�����е�next
//���ͷָ��Ϊ�գ��򴴽���һ������ʱ����ֱ�ӿ������βΣ������Ҫ������ָ��
//�ı�int����int*���ı�int*����int**����ô�ı�plist����*plist

void SLTPushBack(SLTNode** pphead, SLTDataType x)     //β��
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



void SLTPushFront(SLTNode** pphead, SLTDataType x) //ͷ��
{
	SLTNode* newnode = BuyListNode(x);//����ĵ�ַ
	newnode->next = *pphead;
	*pphead = newnode;
}



void SLTPopBack(SLTNode** pphead)      //βɾ
{
	//1.��
	assert(*pphead);
	//2.һ���ڵ�
	//3.����ڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
	}
	else
	{
		SLTNode* tailPre = NULL;     //βɾҪ����һ���ڵ��е�ָ���ÿգ������Ҫ�����һ���ڵ�ĵ�ַ
		SLTNode* tail = *pphead;
		//while (tail->next)
		//{
		//	tailPre = tail;
		//	tail = tail->next;
		//}
		//free(tailPre->next);    //tailPre->next����tail������ָ������һ������
		//tailPre->next = NULL;

		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}

}


void SLTPopFront(SLTNode** pphead) //ͷɾ
{
	//��
	assert(*pphead);
	//������
	SLTNode* cur = *pphead; //ָ���һ����Ҳ���ǽ�ɾ����
	*pphead = (*pphead)->next;
	free(cur);
	cur = NULL;
}



SLTNode* SLTFind(SLTNode* phead, SLTDataType x)                    //����
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








void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)      //��pos֮ǰ����
{
	assert(pos);
	//posΪ��һ������
	//pos��Ϊ��һ������
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* cur = *pphead;
		SLTNode* newnode = BuyListNode(x);
		while (cur->next)                   //�����ҵ�pos��ǰһ������
		{
			if (cur->next == pos)           //��ǰһ�������next��Ϊ������
			{
				cur->next = newnode;
				break;
			}
			cur = cur->next;
		}
		newnode->next = pos;                //����������������������
	}
}


void SLTInsertAfter(SLTNode* pos, SLTDataType x)         //��pos֮�����
{
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}



void SLTEraseAfter(SLTNode* pos)                        //ɾ��pos֮��
{
	assert(pos);
	assert(pos->next);
	SLTNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
	cur = NULL;
}