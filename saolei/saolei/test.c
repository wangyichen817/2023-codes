#include"game.h"



int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("���������룺\n");
			break;
		}
	} while (num);
	return 0;
}