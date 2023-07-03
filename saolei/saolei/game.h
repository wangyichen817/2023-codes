#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define easy 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
void intitboard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void displayboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int getmine(char board[ROWS][COLS], int x, int y);