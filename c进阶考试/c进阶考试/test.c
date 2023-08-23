#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

#include<string.h>
int main() {
    char s[20] = { 0 };
    scanf("%s", &s);
    int val = strlen(s);  //获取字符长度
    for (int i = 1; i <= val; i++) {  //依次输出字符
        printf("%c", s[i - 1]);
        //每输出三位数加一个‘，’且输出数不为最后一个数
        if ((val - i) % 3 == 0 && i != val) 
            printf(",");
    }
    return 0;
}

//int main() {
//    long long num;
//    int count = 1;
//    scanf("%lld", &num);
//    long long num1 = num;
//    while (num1 / 10)
//    {
//        count++;
//        num1 = num1 / 10;
//    }
//    if (count < 4)
//    {
//        printf("%lld", num);
//        return 0;
//    }
//    while (count - 3 > 0)
//    {
//        count -= 3;
//        printf("%lld", num / (long long)pow(10, (double)count));
//        printf(",");
//        num = num % (long)pow(10, (double)count);
//    }
//    printf("%lld", num);
//    return 0;
//}




//int main()
//{
//    long long num;
//    int count = 1;
//    scanf("%lld", &num);
//    long long num1 = num;
//    while (num1 / 10)
//    {
//        count++;
//        num1 = num1 / 10;
//    }
//    count += count / 3;
//    char arr[13];
//    int flat = 0;
//    for (int i = 0; i < count; i++)
//    {
//        if (flat==3 )
//        {
//            arr[i] = 0;
//            flat = 0;
//            continue;
//        }
//        arr[i] = num % 10;
//        num /= 10;
//        flat++;
//    }
//    for (int i = 0; i < count; i ++)
//    {
//        if (flat == 3)
//        {
//            arr[i] = ',';
//            flat = 0;
//            continue;
//        }
//        flat++;
//    }
//    count-=1;
//    int n = 0;
//    char arr1[13] = "0";
//    for (int i = count - 1; i >= 0; i--)
//    {
//        arr1[n] = arr[i];
//        n++;
//    }
//    printf("%s", arr1);
//    return 0;
//}