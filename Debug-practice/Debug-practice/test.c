#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//��������ż��˳��
//sort(int* arr, int sz)
//{
//	int count = 0;
//	int i = 0;
//	int arr1[100];
//	//������ǰ
//	while (i < sz)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			arr1[count] = arr[i];
//			count++;
//		}
//		i++;
//	}
//	i = 0;
//	//ż���ں�
//	while (i < sz)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr1[count] = arr[i];
//			count++;
//		}
//		i++;
//	}
//	for (int j = 0; j < count; j++)
//		printf("%d ", arr1[j]);
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) != EOF)//��������
//        //    int count = 1;
//        //    for (int n = 0; n < (num / 2); n++)
//        //    {
//        //        for (int i = 0; i <= n; i++)//��ӡ���ߵĿո�
//        //        {
//        //            printf(" ");
//        //        }
//        //        printf("*");//��ӡ*
//        //        for (int i = 1; i <= (num - (2 * count)); i++)//��ӡ�м�Ŀո�
//        //        {
//        //            printf(" ");
//        //        }
//        //        printf("*");//��ӡ*
//        //        //for (int i = 0; i <= n; i++)//��ӡ���ߵĿո�
//        //        //{
//        //        //    printf(" ");
//        //        //}
//        //        printf("\n");
//        //        count++;
//        //    }
//        //    //�°�
//        //     count = 1;
//        //     for (int n = (num / 2); n >=0 ; n--)
//        //    {
//        //        for (int i = n; i >= 0; i--)//��ӡ���ߵĿո�
//        //        {
//        //            printf(" ");
//        //        }
//        //        printf("*");//��ӡ*
//        //        for (int i = (num - (2 * count)); i >= 1; i--)//��ӡ�м�Ŀո�
//        //        {
//        //            printf(" ");
//        //        }
//        //        printf("*");//��ӡ*
//        //        //for (int i = 0; i <= n; i++)//��ӡ���ߵĿո�
//        //        //{
//        //        //    printf(" ");
//        //        //}
//        //        printf("\n");
//        //        count++;
//        //    }
//        //   /* int arr[][] = { 0 };
//        //    for (int row = 0; row < (num / 2); row++)
//        //    {
//        //        for (int col = 0; col < num; col++)
//        //        {
//        //            arr[row][col] = ' ';
//        //            printf(" ");
//        //        }
//        //    }
//        //*/
//    {
//        for (int i = 0; i < num; i++)
//        {
//            for (int j = 0; j < num; j++)
//            {
//                if (j == i || j + i == num - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//
//    }
// 
//    return 0;
//}

//���ո�ֱ��������ͼ��(��������)
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)//��������
	{
		for (int row = 0; row<num; row++)
		{
			for (int col = 0;col<num; col++)
			{
				if (row + col >= num - 1)
				{
					printf("* ");
				}
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}