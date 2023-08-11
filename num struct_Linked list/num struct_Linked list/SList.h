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



void SLTPrint(SLTNode* phead);                                      //打印链表
SLTNode* BuyListNode(SLTDataType x);                                //创建链表
void SLTPushBack(SLTNode** pphead,SLTDataType x);                   //尾插
void SLTPushFront(SLTNode** pphead, SLTDataType x);                 //头插
void SLTPopBack(SLTNode** pphead);                                  //尾删
void SLTPopFront(SLTNode** pphead);                                 //头删
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);                    //查找
void SLTInsert(SLTNode** pphead,SLTNode* pos, SLTDataType x);       //在pos之前插入
void SLTInsertAfter( SLTNode* pos, SLTDataType x);                  //在pos之后插入
void SLTEraseAfter(SLTNode* pos);                                   //删除pos之后