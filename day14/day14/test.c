#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* masterMind(char* solution, char* guess, int* returnSize)
{

    int* answer = (int*)malloc(sizeof(int) * 2);
    int num = 0;
    int num1 = 0;
    //²ÂÖÐ
    for (int i = 0; i < 4; i++)
    {
        if (solution[i] == guess[i])
        {
            solution[i] = '0';
            guess[i] = '1';
            num++;
        }
    }
    //Î±²ÂÖÐ
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (solution[j] == guess[i])
            {
                solution[j] = '0';
                num1++;
                break;
            }
        }
    }
    *returnSize = 2;
    answer[0] = num;
    answer[1] = num1;
    return answer;
}


int main()
{
    char arr1[] = "RGRB";
    char arr2[] = "BBGY";
    int* a = masterMind(arr1, arr2);
	return 0;
}




//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//    // write code here
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i < numbersLen; i++)
//    {
//        for (int j = 0; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target && i != j)
//            {
//                if (i < j)
//                {
//                    ret[0] = i + 1;
//                    ret[1] = j + 1;
//                }
//                else
//                {
//                    ret[0] = j + 1;
//                    ret[1] = i + 1;
//                }
//            }
//        }
//    }
//    *returnSize = 2;
//    return ret;
//}