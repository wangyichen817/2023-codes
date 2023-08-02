#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
//��̬˳���
//#define N 100
//typedef int SLDataType;
//struct seqlist
//{
//	SLDataType a[N];
//	int size;
//};



//��̬˳���
typedef int SLDataType;
typedef struct seqlist
{
	SLDataType* a;  //��̬�ռ���ʼ��ַ
	int size;       //�洢��Ч���ݸ���
	int capacity;   //�ռ��С
}SL;


//��������- ��ɾ���
void SLinit(SL* s);     //��ʼ��
void SLdestroy(SL* s);  //����
void CheckData(SL* s);  //�������
void print(SL* s);      //��ӡ����

//ͷ��ͷɾ β��βɾ
void SLPushBack(SL* s, SLDataType x);       //������������
void SLPopBack(SL* s);                      //����ɾ������
void SLPushFront(SL* s, SLDataType x);      //ͷ��
void SLPopFront(SL* s);                     //ͷɾ
void SLInsert(SL* s, int pos, SLDataType x);//ָ��λ�ò���
void SLErase(SL* s, int pos);               //ָ��λ��ɾ��


