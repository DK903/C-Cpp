#define ROW 3//�Լ������ͷ�ļ� 
#define COL 3
#include <stdio.h>//����ͷ�ļ����൱�����ô��� 
//�������� 
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row, int col);
void ComputerMove(char board[ROW][COL],int row, int col);
//��������������Ϸ��״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'C' 
char IsWin(char board[ROW][COL],int row, int col);
