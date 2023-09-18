#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;                             //栈本身(数组形式)
	int top;                                   //栈顶
	int capacity;                              //栈容量
}ST;

void STInit(ST* ps);                          //初始化
void STDestroy(ST* ps);                       //销毁
void STPush(ST* ps,STDataType x);             //入栈
void STPop(ST* ps);                           //出栈
STDataType STTop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);