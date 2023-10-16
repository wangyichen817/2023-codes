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

typedef struct Queue                                //��һ���ṹ��������ͷβ���ʹ��ʱ���β�ʵ������
{
	QNode* head;
	QNode* tail;
	int size;
}Que;


void QueueInit(Que* pq);
void QueuePush(Que* pq, QDataType x);               //β��
void QueuePop(Que* pq);                             //ͷɾ
QDataType QueueBack(Que* pq);                       //βȡ(������)
QDataType Queuefront(Que* pq);                      //ͷȡ
void QueueDestroy(Que* pq);                         //����
bool QueueEmpty(Que* pq);                           //�п�
int QueueSize(Que* pq);                             //����