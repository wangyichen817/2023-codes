#include "game.h"

//初始化棋盘
void initboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void print(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//打印第i行
	{
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线
		for (int j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

//玩家落子
void play(char board[Row][Col], int row, int col)
{
	printf("玩家落子：");
	int a = 0;
	int b = 0;
	while (1)
	{
		scanf_s("%d %d", &a, &b);//判断坐标是否合理
		if (a >= 1 && a <= row && b >= 1 && b <= col)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				break;
			}
			else
			{
				printf("请重新输入：");
			}
		}
	}
}

//电脑下棋
void cplay(char board[Row][Col], int row, int col)
{
	while (1)
	{
		int ret = rand() % row;//0  1  2
		int num = rand() % col;//0  1  2
		if (board[ret][num] == ' ')
		{
			board[ret][num] = '#';
			break;
		}
	}
}

char win(char board[Row][Col], int row, int col)//玩家赢，电脑赢，平局
{
	int i = 0;
	int j = 0;
	int n = 1;
	for (int a = 0; a < row; a++)//行
	{
		if (board[a][0] == board[a][1] && board[a][1] == board[a][2])
			return board[a][0];
	}
	for (int a = 0; a < col; a++)//列
	{
		if (board[0][a] == board[1][a] && board[1][a] == board[2][a])
			return board[0][a];
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')//正对角线
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')//反对角线
	{
		return board[1][1];
	}
	for (i = 0; i < row; i++)//行
	{
		for (j = 1; j < col + 1; j++)//列
		{
			if (board[i][j] == ' ')//保证棋盘是满的
			{
				n = 0;
			}
		}
	}
	if (n == 1)
	{
		return 'c';
	}

	//for (i = 0; i < row; i++)//行
	//{
	//	for (j = 1; j < col+1; j++)//列
	//	{
	//		if (board[i][j] != board[i][0])//行，玩家赢
	//			break;
	//	}
	//	if (j == col+1)
	//		return board[i][0];
	//}
	//for (i = 0; i < row; i++)//行
	//{
	//	for (j = 1; j < col+1; j++)
	//	{
	//		if (board[j+1][i] != board[0][j])//列，玩家赢
	//			break;
	//	}
	//	if (j == col+1)
	//		return board[0][j];
	//}
	//for (i = 0; i < row; i++)//正对角线
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (board[i][j] == board[0][0] && i==j )//对角线，玩家赢
	//			break;
	//	}
	//	if (j == col)
	//		return board[0][0];
	//}
}


void game()
{
	char result = 0;
	char board[Row][Col] = { 0 };
	initboard(board, Row, Col);//初始化棋盘
	do{
		print(board, Row, Col);//打印棋盘
		play(board, Row, Col);//玩家下棋
	    result = win(board, Row, Col);//判断输赢
		if (result == '*')//player赢
		{
			print(board, Row, Col);
			printf("玩家赢\n");
			break;
		}
		else if (result == '#')
		{
			print(board, Row, Col);
			printf("电脑赢\n");
			break;
		}
		else if(result=='c')
		{
			print(board, Row, Col);
			printf("平局\n");
			break;
		}
		cplay(board, Row, Col);//电脑下棋
		result = win(board, Row, Col);//判断输赢
		if (result == '*')
		{
			print(board, Row, Col);
			printf("玩家赢\n");
			break;
		}
		else if (result == '#')
		{
			print(board, Row, Col);
			printf("电脑赢\n");
			break;
		}
		else if(result=='c')
		{
			print(board, Row, Col);
			printf("平局\n");
			break;
		}
	} while (1);

















	/*if (result == '*')
	{
		print(board, Row, Col);
		printf("玩家赢\n");
	}
	else if (result == '#')
	{
		print(board, Row, Col);
		printf("电脑赢\n");
	}
	else
	{
		print(board, Row, Col);
		printf("平局\n");
	}*/
}

