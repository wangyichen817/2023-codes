#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������
//int main()
//{
//	//���ѭ�������ҳ����������Ŀ����ԣ��ж�����������if���
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						//��˵��һ�룬���Ӻ�Ϊ1
//						if ((b==2)+(a==3)==1&&
//							(b==2)+(e==4)==1&&
//							(c==1)+(d==2)==1&&
//							(c==5)+(d==3)==1&&
//							(e==4)+(a==1)==1&&
//							a*b*c*d*e==120)
//						{
//						printf("a:%d b:%d c:%d d:%d e:%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;


//int main()
//{
//	char kill = 'A';//�ٶ�ΪA
//	for (kill = 'A'; kill <= 'D'; kill++)
//	{
//			if ((kill != 'A') + (kill == 'C') +( kill == 'D') +( kill != 'D') == 3)//����Ϊ�棬һ��Ϊ��
//			break;
//	}
//	printf("%c\n", kill);
//	return 0;
//}


int main()
{
	int row = 0;
	int arr[100][100];
	scanf("%d", &row);//num������
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//int main()
//{
//	int a[10][10], i, j;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)//���j<n�Ļ���������ǵ��ϰ벿�־ͻ������� 
//		{
//			if (i == j || j == 0)
//			{
//				a[i][j] = 1;
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

