#include"game.h"
 void menu()
{
	printf("*********************\n");
	printf("*********************\n");
	printf("****1.paly 0.exit****\n");
	printf("*********************\n");
	printf("*********************\n");
}

 void intitboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
 {
	 int i = 0 ;
	 int j = 0;
	 for (i = 0; i < row; i++)
	 {
		 for (j = 0; j < col; j++)
		 {
			 mine[i][j] = '0';
			 show[i][j] = '*';
		 }
	 }
 }

 void displayboard(char board[ROWS][COLS], int row, int col)
 {
	 int i = 0;
	 int j = 0;
	 int n = 0;
	 for (n = 0; n <= col; n++)
	 {
		 printf(" %d ", n);
	 }
	 printf("\n");
	 for (i = 1; i <= row; i++)
	 {
		 printf(" %d ", i);
		 for (j = 1; j <= col; j++)
		 {
			 printf(" %c ", board[i][j]);
		 }
		 printf("\n");
	 }
 }

 void setmine(char board[ROWS][COLS], int row, int col)
 {
	 int n = 0;
	 int m = 0;
	 int i = easy;
	 while (i)
	 {
		 m = rand() % row + 1;
		 n = rand() % col + 1;
		 if (board[m][n] == '0')
		 {
			 board[m][n] = '1';
			 i--;
		 }
	 }
 }

 int getmine(char board[ROWS][COLS], int x, int y)
 {
	 return (board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1]
		 + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0');
 }
 
 void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
 {
	 int x = 0;
	 int y = 0;
	 int win = col * row - easy;
	 int count = 0;
	 while (count<win)
	 {
		 printf("���������꣺");
		 scanf("%d %d", &x, &y);
		 if (x >= 1 && x <= row && y >= 1 && y <= col)
		 {
			 if (mine[x][y] == '1')//����
			 {
				 printf("��Ϸ����\n");
				 displayboard(mine, ROW, COL);
				 break;
			 }
			 else//�����ף�ͳ����Χ������
			 {
				 int num=getmine(mine, x, y);
				 show[x][y] = num+'0';//ת������
				 displayboard(show, ROW, COL);
				 count++;
			 }
		 }
		 else
		 {
			 printf("����������\n");
		 }
	 }
	 if (count == win)
	 {
		 printf("��ϲ��,��Ӯ�ˣ�\n");
		 displayboard(mine, ROW, COL);
	 }
	 else
		 printf("���ź��������ˣ�\n");
 }
 void game()
 {
	 char mine[ROWS][COLS];//����׵�����
	 char show[ROWS][COLS];//��ʾ�׵�����
	 //��ʼ������ 1.mineΪȫ'0',showΪȫ'*'
	 intitboard(mine, show, ROWS, COLS);
	 //��ӡ����
	 displayboard(show, ROW, COL);
	 //1.������
	 setmine(mine, ROW, COL);
	 //2.�Ų���
	 findmine(mine, show, ROW, COL);
  }