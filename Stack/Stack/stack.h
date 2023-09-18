#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;                             //ջ����(������ʽ)
	int top;                                   //ջ��
	int capacity;                              //ջ����
}ST;

void STInit(ST* ps);                          //��ʼ��
void STDestroy(ST* ps);                       //����
void STPush(ST* ps,STDataType x);             //��ջ
void STPop(ST* ps);                           //��ջ
STDataType STTop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);