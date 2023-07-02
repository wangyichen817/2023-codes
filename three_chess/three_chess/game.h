#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define Row 3
#define Col 3
#define _CRT_SECURE_NO_WARNINGS 1

void initboard(char board[Row][Col], int row, int col);
void print(char board[Row][Col], int row, int col);
void play(char board[Row][Col], int row, int col);
void cplay(char board[Row][Col], int row, int col);
char win(char board[Row][Col], int row, int col);
void game();