#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<string.h>
#include<stdio.h>
#define max 100

//���˵���Ϣ
typedef struct peoinfo
{
	char name[20];//����
	int age;///����
	char sex[5];//�Ա�
	char tele[12];//�绰
	char addr[30];//��ַ
}peoinfo;

//ͨѶ¼
typedef struct contact
{
	peoinfo data[max];
	int sz;
}contact;

//ͨѶ¼����
enum opt
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

//��������

//��ʽ��ͨѶ¼
void initcontact(contact* );
//������ϵ��
void Add(contact*);
//��ʾ��ϵ��
void Show(const contact* p);
//ɾ����ϵ��
void Del(contact*);
//������ϵ��
void Search(const contact*);
//�޸���ϵ��
void Modify(contact*);
//������ϵ��
void Sort(contact* p,int sz);