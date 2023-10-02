#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;



void Swap(HPDataType* a, HPDataType* b);
void HeapPrint(HP* php);
void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPush(HP* php,HPDataType x);
void AdjustUp(HPDataType* a, int child);            //向上调整堆
void HeapPop(HP* php);
void AdjustDown(HPDataType* a, int parent, int size);            //向下调整堆
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);