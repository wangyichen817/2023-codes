#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	int i;
//	float c;
//};
//int main()
//{
//	//绝对路径："C:\Users\wang\Desktop\data.txt"
//	//相对路径
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}

//	//写文件
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);*/
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//写到pf所指向代表的文件中
//	//	fputc('a' + i, stdout);//输出到屏幕上
//	//}
	
//	//读文件
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	 ch = fgetc(pf);
//	printf("%c\n", ch); 
//	 ch = fgetc(pf);
//	printf("%c\n", ch);
//	 ch = fgetc(pf);
//	printf("%c\n", ch);*/

//	//c结尾：一个一个读写(字符)
//	//s结尾：一行一行写，根据num数量读(字符串)
	
//	//写文件，一行
//	/*fputs("hello bit\n", pf);*/
//
//	//读文件，最多读10-1个
//	/*char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s", arr);*/

//	//写文件
//	//struct S s = { 100,3.12f };
//	//fprintf(pf,"%d %f", s.i, s.c);
//	//fprintf(stdout, "%d %f", s.i, s.c);stdout，打印到屏幕上
	
//	//读文件
//	//struct S s = { 0 };
//	//fscanf(pf,"%d %f", &(s.i), &(s.c));

//	//写文件：针对文件
//	struct S s = {0};
//	//fwrite(&s, sizeof(s),1, pf);把&s中1个sizeof(s)大小的内容写到pf中
	
//	//读文件：针对文件
//	/*fread(&s, sizeof(s), 1, pf);
//	printf("%d %f", s.i, s.c);*/

//	//读文件，读取特定位置
//	fseek(pf, 5, SEEK_SET);//让pf从起始位置定位到偏移量为5的字符
//	int ch = fgetc(pf);
//	//ftell：返回文件指针相对于起始位置的偏移量
//	int tmp = ftell(pf);
//	//rewind:使文件指针回到其实位置
//	rewind(pf);
//	printf("%d\n", tmp);
//	printf("%c", ch);

	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//拷贝文件
int main()
{
	FILE* pfread = fopen("data1.txt", "rb");
	if (pfread == NULL)
	{
		perror("open file in read");
		return 1;
	}
	FILE* pfwrite = fopen("data3.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("open file in write");
		return 1;
	}

	//用fread实现拷贝
	char tmp[] = { 0 };
	while (fread(tmp, 1, 1, pfread))
	{
		fwrite(tmp, 1, 1, pfwrite);
	}

	//用fgetc一个一个拷贝
	//int ch = 0;
	//while ((ch = fgetc(pfread)) != EOF)//判断条件为读到的最后一个内容是否为空
	//{
	//	fputc(ch, pfwrite);
	//}
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}