#include "game.h"
int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	do
	{
		printf("**************\n");
		printf("****1.paly****\n");
		printf("****0.exit****\n");
		printf("**************\n");
		printf("��ѡ��");
		scanf("%d", & num);//0   1    ��������
		switch (num)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (num);
	return 0;
}