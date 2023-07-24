#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int* printNumbers(int n, int* num) 
//{
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i < (int)pow(10, n); i++)
//    {
//        num[i-1] = i;
//    }
//    return num;
//}
//int main()
//{
//    int num[] = { 0 };
//    int n = 0;
//    printNumbers(n, num);
//    for (int j = 0; j < 10; j++)
//    {
//        printf("%d", num[j]);
//    }
//    return 0;
//}


//int com(int y, int m)
//{
//    int day = 0;
//    switch (m)
//    {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        day = 31;
//        break;
//    case 2:
//    {
//        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//            day = 29;
//        else
//            day = 28;
//    }
//    break;
//    default:
//        day = 30;
//        break;
//    }
//    return day;
//}

//int main()
//{
//    int y, m, d;
//    scanf("%d %d %d", &y, &m, &d);
//        for (int i = 1; i < m; i++)
//        {
//            d+=com(y, i);
//        }          
//    printf("%d", d);
//    return 0;
//}



struct S
{
    int num[10];
    int count;
};
struct S* comnum(int arr[],int sz,struct S * a)
{
    int flag = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {  
            if (arr[i] == arr[j]&&i!=j)
                flag = 1;
        }
        if (flag == 0)
        {
            a->num[a->count] = arr[i];
            a->count++;
        }
        flag = 0;
    }
    return a;
}


int main()
{
    int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    struct S a = { {0},0 };
    struct S* b=comnum(arr, sz,&a);
    for (int i = 0; i <b->count; i++)
        printf("%d ", b->num[i]);
    return 0;
}



