#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>


typedef struct BinaryTreeNode* QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue                                //用一个结构体来改善头尾结点使用时的形参实参问题
{
	QNode* head;
	QNode* tail;
	int size;
}Que;


void QueueInit(Que* pq);
void QueuePush(Que* pq, QDataType x);               //尾插
void QueuePop(Que* pq);                             //头删
QDataType QueueBack(Que* pq);                       //尾取(不常用)
QDataType Queuefront(Que* pq);                      //头取
void QueueDestroy(Que* pq);                         //销毁
bool QueueEmpty(Que* pq);                           //判空
int QueueSize(Que* pq);                             //个数