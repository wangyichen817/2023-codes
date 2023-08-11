#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;



void SLTPrint(SLTNode* phead);                                      //��ӡ����
SLTNode* BuyListNode(SLTDataType x);                                //��������
void SLTPushBack(SLTNode** pphead,SLTDataType x);                   //β��
void SLTPushFront(SLTNode** pphead, SLTDataType x);                 //ͷ��
void SLTPopBack(SLTNode** pphead);                                  //βɾ
void SLTPopFront(SLTNode** pphead);                                 //ͷɾ
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);                    //����
void SLTInsert(SLTNode** pphead,SLTNode* pos, SLTDataType x);       //��pos֮ǰ����
void SLTInsertAfter( SLTNode* pos, SLTDataType x);                  //��pos֮�����
void SLTEraseAfter(SLTNode* pos);                                   //ɾ��pos֮��