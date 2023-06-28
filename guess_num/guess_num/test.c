#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	//1.生成随机数
//	int num = 0;
//	int f = 1;
//	int ret = rand()%100+1;//rand必须用srand设置起始值
//	//2.猜数字
//	while (f)
//	{
//		scanf("%d", &num);//输入猜的值
//		if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			f = 0;
//			printf("恭喜你，猜对了\n");
//		}
//	}
//}
//
//void menu()//函数名前是返回值的类型
//{
//	printf("***************\n");
//	printf("*1.play 0.exit*\n");
//	printf("***************\n");
//}
//
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));//要给srand传一个变化的值
//	//time函数可以返回一个时间戳
//	// unsigned 强制转换类型
//	//打印菜单以及是否多次玩游戏，do while：先打印一次菜单，再进行循环，
//	//                            不限制次数的循环（满足条件后退出）用while
//	//                            switch:判断的次数比if多，判断是否玩游戏
//	do 
//	{
//		menu();
//		printf("请输入指令：");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("猜数字游戏\n");
//			game();
//			break;
//		case 2:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("指令错误\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}
int main()
{

	return 0;
}