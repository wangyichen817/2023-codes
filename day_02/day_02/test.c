#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	int num = 1;//��ʼ������
//	int tmp = 0;
//	while (input)
//	{
//		while (num < input)//�ҵ���ʼ��
//		{
//			num+=2;
//		}
//		int ch = num;
//		int result = 0;//���
//		for (i = 0; i < input; i++)//����m����������
//		{
//			result = result + ch;
//			ch += 2;
//		}
//		if (result == (int)pow(input, 3))//�Ƿ��������
//		{
//			int j = 0;
//			for (j = input; j > 0; j--)
//			{
//				printf("%d", ch - j * 2);
//				if(j>1)
//				printf("+");
//			}
//			break;
//		}
//		else//�ҵ���ʼ��
//		{
//			num += 2;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = 2;
//	int result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		result += tmp;
//		tmp += 3;
//	}
//	printf("%d", result);
//	return 0;
//}


int main()
{
	int a = 3;
	printf("%d\n", a -= a * a);
	return 0;
}