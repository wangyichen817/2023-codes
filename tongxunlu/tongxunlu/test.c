//ͨѶ¼
//��ɾ�Ĳ飬������ʾȫ��
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
	//������ͨѶ¼
	contact con;
	con.sz = 0;
	//ͨѶ¼��0
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
			printf("���������룺");
			break;
		}
	} while (num);
}


int main()
{
	test();
	return 0;
}