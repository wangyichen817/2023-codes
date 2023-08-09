#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m[100];
//	m[0] = 1;
//	m[1] = 1;
//	int num = 0;
//	if (n > 2)
//	{
//		for (int i = 2; i < n; i++)
//		{
//			m[i] = m[i - 2] + m[i - 1];
//			num = m[i];
//		}
//	}
//	else {
//		num = 1;
//	}
//	printf("%d", num);
//	return 0;
//}
//
//
//
//int make(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return make(n - 1) + make(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int result = make(n);
//	printf("%d", result);
//	return 0;
//}

//int main() 
//{
//    int m, n;
//    while (scanf("%d %d", &n, &m) != EOF)
//    {
//        double num = n;    //前m项之和，赋值以后则已经求完第一项
//        double m1 = n;
//        for (int i = 1; i < m; i++)
//        {
//            m1 = sqrt(m1);
//            num += m1;
//        }
//        printf("%.2lf\n", num);
//    }
//    return 0;
//}


