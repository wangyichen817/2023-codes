#include"SList.h"

void SLtest01()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushFront(&plist, 10);
	SLTPushFront(&plist, 20);
	SLTPushFront(&plist, 30);
	SLTNode* p = SLTFind(plist, 20);;
	printf("%p\n", p);
	SLTInsert(&plist, p, 40);
	SLTInsertAfter(p, 50);
	SLTEraseAfter(p);
	SLTPrint(plist);
}



int main()
{
	SLtest01();
	
	return 0;
}