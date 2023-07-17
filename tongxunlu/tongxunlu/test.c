//通讯录
//增删改查，排序，显示全部
#include"contact.h"


void menu()
{
	printf("********************************\n");
	printf("******1.add     2,del    ******\n");
	printf("******3.search  4.modify ******\n");
	printf("******5.show    6,sort   ******\n");
	printf("******      0.exit       ******\n");
	printf("********************************\n");

}

void test()
{
	int num = 0;
	//首先有通讯录
	contact con;
	con.sz = 0;
	//通讯录置0
	initcontact(&con);
	do 
	{
		menu();
		scanf("%d", &num);
		switch (num)
		{
		case exit:
			break;
		case add:
			Add(&con);
			break;
		case del:
			Del(&con);
			break;
		case search:
			Search(&con);
			break;
		case modify:
		Modify(&con);
			break;
		case show:
			Show(&con);
			break;
		case sort:
			Sort(&con,con.sz);
			break;
		default:
			printf("请重新输入：");
			break;
		}
	} while (num);
}


int main()
{
	test();
	return 0;
}