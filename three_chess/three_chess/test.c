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
		printf("请选择：");
		scanf("%d", & num);//0   1    其他数字
		switch (num)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("请重新选择：\n");
			break;
		}
	} while (num);
	return 0;
}