#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
//静态顺序表
//#define N 100
//typedef int SLDataType;
//struct seqlist
//{
//	SLDataType a[N];
//	int size;
//};



//动态顺序表
typedef int SLDataType;
typedef struct seqlist
{
	SLDataType* a;  //动态空间起始地址
	int size;       //存储有效数据个数
	int capacity;   //空间大小
}SL;


//管理数据- 增删查改
void SLinit(SL* s);     //初始化
void SLdestroy(SL* s);  //销毁
void CheckData(SL* s);  //检查扩容
void print(SL* s);      //打印数据

//头插头删 尾插尾删
void SLPushBack(SL* s, SLDataType x);       //正常增加数据
void SLPopBack(SL* s);                      //正常删除数据
void SLPushFront(SL* s, SLDataType x);      //头插
void SLPopFront(SL* s);                     //头删
void SLInsert(SL* s, int pos, SLDataType x);//指定位置插入
void SLErase(SL* s, int pos);               //指定位置删除


