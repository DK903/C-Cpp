#include <stdio.h>
#include <stdlib.h>//30 -- srand 
#include <time.h>//30 -- time 
#include "game.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*********************************************\n");
	printf("**********1. start         0. exit***********\n");
	printf("*********************************************\n");
}
void game()//游戏的整个算法实现 
{	
	char ret = 0;
	//数组 -- 存放走出的棋盘信息 
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘 
	//开始下棋
	while(1)
	{
		PlayerMove(board,ROW,COL);//玩家下棋
		DisplayBoard(board,ROW,COL);
		//判断输赢  -- 制定规则
		ret = IsWin(board,ROW,COL);
		if(ret != 'C'){
			break;
		} 
		ComputerMove(board,ROW,COL);//电脑下棋 
		DisplayBoard(board,ROW,COL);
		ret = IsWin(board,ROW,COL);
		if(ret != 'C'){
			break;
		} 
	} 
	//判断输赢
	if (ret == '*'){
		printf("玩家赢\n");
	}
	else if (ret == '#'){
		printf("电脑赢\n");
	} 
	else{
		printf("平-----局");
	} 
	
}
void test(){
	int input = 0;
	srand((unsigned int)time(NULL));//生成随机数 
	do{
		menu();
		printf("请选择：> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("*****************退出游戏********************\n");
			break;	
		default:
			printf("选择错误，请重新选择！\n"); 
			break;
		}
	}while(input);
}
int main() 
{
	test();
	return 0;
}
