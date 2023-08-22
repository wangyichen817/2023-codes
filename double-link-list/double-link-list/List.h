#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;


LTNode* BuyLTNode(LTDataType x);                       //��������
LTNode* LTInit();                                      //��ʼ��
void LTPrint(LTNode* phead);                           //��ӡ
void LTPushBack(LTNode* phead, LTDataType x);          //β��
void LTPopBack(LTNode* phead);                         //βɾ
void LTPushFront(LTNode* phead, LTDataType x);         //ͷ��
void LTPopFront(LTNode* phead);                        //ͷɾ
int LTSize(LTNode* phead);                             //����
void LTInsert(LTNode* pos, LTDataType x);              //posǰ����
void LTErase(LTNode* pos);                             //ɾ��posλ��