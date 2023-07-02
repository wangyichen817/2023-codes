#include "game.h"

//��ʼ������
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

//��ӡ����
void print(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//��ӡ��i��
	{
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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

//�������
void play(char board[Row][Col], int row, int col)
{
	printf("������ӣ�");
	int a = 0;
	int b = 0;
	while (1)
	{
		scanf_s("%d %d", &a, &b);//�ж������Ƿ����
		if (a >= 1 && a <= row && b >= 1 && b <= col)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				break;
			}
			else
			{
				printf("���������룺");
			}
		}
	}
}

//��������
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

char win(char board[Row][Col], int row, int col)//���Ӯ������Ӯ��ƽ��
{
	int i = 0;
	int j = 0;
	int n = 1;
	for (int a = 0; a < row; a++)//��
	{
		if (board[a][0] == board[a][1] && board[a][1] == board[a][2])
			return board[a][0];
	}
	for (int a = 0; a < col; a++)//��
	{
		if (board[0][a] == board[1][a] && board[1][a] == board[2][a])
			return board[0][a];
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')//���Խ���
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')//���Խ���
	{
		return board[1][1];
	}
	for (i = 0; i < row; i++)//��
	{
		for (j = 1; j < col + 1; j++)//��
		{
			if (board[i][j] == ' ')//��֤����������
			{
				n = 0;
			}
		}
	}
	if (n == 1)
	{
		return 'c';
	}

	//for (i = 0; i < row; i++)//��
	//{
	//	for (j = 1; j < col+1; j++)//��
	//	{
	//		if (board[i][j] != board[i][0])//�У����Ӯ
	//			break;
	//	}
	//	if (j == col+1)
	//		return board[i][0];
	//}
	//for (i = 0; i < row; i++)//��
	//{
	//	for (j = 1; j < col+1; j++)
	//	{
	//		if (board[j+1][i] != board[0][j])//�У����Ӯ
	//			break;
	//	}
	//	if (j == col+1)
	//		return board[0][j];
	//}
	//for (i = 0; i < row; i++)//���Խ���
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (board[i][j] == board[0][0] && i==j )//�Խ��ߣ����Ӯ
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
	initboard(board, Row, Col);//��ʼ������
	do{
		print(board, Row, Col);//��ӡ����
		play(board, Row, Col);//�������
	    result = win(board, Row, Col);//�ж���Ӯ
		if (result == '*')//playerӮ
		{
			print(board, Row, Col);
			printf("���Ӯ\n");
			break;
		}
		else if (result == '#')
		{
			print(board, Row, Col);
			printf("����Ӯ\n");
			break;
		}
		else if(result=='c')
		{
			print(board, Row, Col);
			printf("ƽ��\n");
			break;
		}
		cplay(board, Row, Col);//��������
		result = win(board, Row, Col);//�ж���Ӯ
		if (result == '*')
		{
			print(board, Row, Col);
			printf("���Ӯ\n");
			break;
		}
		else if (result == '#')
		{
			print(board, Row, Col);
			printf("����Ӯ\n");
			break;
		}
		else if(result=='c')
		{
			print(board, Row, Col);
			printf("ƽ��\n");
			break;
		}
	} while (1);

















	/*if (result == '*')
	{
		print(board, Row, Col);
		printf("���Ӯ\n");
	}
	else if (result == '#')
	{
		print(board, Row, Col);
		printf("����Ӯ\n");
	}
	else
	{
		print(board, Row, Col);
		printf("ƽ��\n");
	}*/
}

