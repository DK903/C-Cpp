#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
// 游戏模式
#define COUNT_MODEL 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明函数

//初始化棋盘 
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set); 
//打印棋盘 
void DisplayBoard(char board[ROWS][COLS],int row,int col);
//放置雷
void SetMine(char mine[ROWS][COLS],int row,int col); 
//排查雷 
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);


