#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<string.h>
#include<stdio.h>
#define max 100

//个人的信息
typedef struct peoinfo
{
	char name[20];//姓名
	int age;///年龄
	char sex[5];//性别
	char tele[12];//电话
	char addr[30];//地址
}peoinfo;

//通讯录
typedef struct contact
{
	peoinfo data[max];
	int sz;
}contact;

//通讯录功能
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

//功能声明

//格式化通讯录
void initcontact(contact* );
//增加联系人
void Add(contact*);
//显示联系人
void Show(const contact* p);
//删除联系人
void Del(contact*);
//查找联系人
void Search(const contact*);
//修改联系人
void Modify(contact*);
//排序联系人
void Sort(contact* p,int sz);