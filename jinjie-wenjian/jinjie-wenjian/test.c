#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	int i;
//	float c;
//};
//int main()
//{
//	//����·����"C:\Users\wang\Desktop\data.txt"
//	//���·��
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}

//	//д�ļ�
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);*/
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//д��pf��ָ�������ļ���
//	//	fputc('a' + i, stdout);//�������Ļ��
//	//}
	
//	//���ļ�
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	 ch = fgetc(pf);
//	printf("%c\n", ch); 
//	 ch = fgetc(pf);
//	printf("%c\n", ch);
//	 ch = fgetc(pf);
//	printf("%c\n", ch);*/

//	//c��β��һ��һ����д(�ַ�)
//	//s��β��һ��һ��д������num������(�ַ���)
	
//	//д�ļ���һ��
//	/*fputs("hello bit\n", pf);*/
//
//	//���ļ�������10-1��
//	/*char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s", arr);*/

//	//д�ļ�
//	//struct S s = { 100,3.12f };
//	//fprintf(pf,"%d %f", s.i, s.c);
//	//fprintf(stdout, "%d %f", s.i, s.c);stdout����ӡ����Ļ��
	
//	//���ļ�
//	//struct S s = { 0 };
//	//fscanf(pf,"%d %f", &(s.i), &(s.c));

//	//д�ļ�������ļ�
//	struct S s = {0};
//	//fwrite(&s, sizeof(s),1, pf);��&s��1��sizeof(s)��С������д��pf��
	
//	//���ļ�������ļ�
//	/*fread(&s, sizeof(s), 1, pf);
//	printf("%d %f", s.i, s.c);*/

//	//���ļ�����ȡ�ض�λ��
//	fseek(pf, 5, SEEK_SET);//��pf����ʼλ�ö�λ��ƫ����Ϊ5���ַ�
//	int ch = fgetc(pf);
//	//ftell�������ļ�ָ���������ʼλ�õ�ƫ����
//	int tmp = ftell(pf);
//	//rewind:ʹ�ļ�ָ��ص���ʵλ��
//	rewind(pf);
//	printf("%d\n", tmp);
//	printf("%c", ch);

	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����ļ�
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

	//��freadʵ�ֿ���
	char tmp[] = { 0 };
	while (fread(tmp, 1, 1, pfread))
	{
		fwrite(tmp, 1, 1, pfwrite);
	}

	//��fgetcһ��һ������
	//int ch = 0;
	//while ((ch = fgetc(pfread)) != EOF)//�ж�����Ϊ���������һ�������Ƿ�Ϊ��
	//{
	//	fputc(ch, pfwrite);
	//}
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}