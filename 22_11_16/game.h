#define ROW 3//自己定义的头文件 
#define COL 3
#include <stdio.h>//引用头文件即相当于引用此项 
//函数声明 
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row, int col);
void ComputerMove(char board[ROW][COL],int row, int col);
//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//继续   - 'C' 
char IsWin(char board[ROW][COL],int row, int col);
