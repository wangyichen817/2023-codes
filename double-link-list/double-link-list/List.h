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


LTNode* BuyLTNode(LTDataType x);                       //增加链表
LTNode* LTInit();                                      //初始化
void LTPrint(LTNode* phead);                           //打印
void LTPushBack(LTNode* phead, LTDataType x);          //尾插
void LTPopBack(LTNode* phead);                         //尾删
void LTPushFront(LTNode* phead, LTDataType x);         //头插
void LTPopFront(LTNode* phead);                        //头删
int LTSize(LTNode* phead);                             //长度
void LTInsert(LTNode* pos, LTDataType x);              //pos前插入
void LTErase(LTNode* pos);                             //删除pos位置