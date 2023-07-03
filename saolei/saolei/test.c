#include"game.h"



int main()
{
	srand((unsigned int)time(NULL));
	int num = 0;
	do 
	{
		menu();
		printf("请选择：");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入：\n");
			break;
		}
	} while (num);
	return 0;
}