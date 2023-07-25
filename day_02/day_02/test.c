#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	int num = 1;//开始的奇数
//	int tmp = 0;
//	while (input)
//	{
//		while (num < input)//找到起始数
//		{
//			num+=2;
//		}
//		int ch = num;
//		int result = 0;//结果
//		for (i = 0; i < input; i++)//决定m个连续奇数
//		{
//			result = result + ch;
//			ch += 2;
//		}
//		if (result == (int)pow(input, 3))//是否符合条件
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
//		else//找到起始数
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