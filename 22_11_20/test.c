#include "game.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*********************************************\n");
	printf("*********1. play             0.exit**********\n");
	printf("*********************************************\n");
}

// 雷 -- 字符 1  
// 非雷 -- 字符 0 
void game(){
//两个数组 11*11 实现 9*9 棋盘 
//1.存放布置好的雷的信息    char
//2.存放排查出的雷的信息	char
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0}; 
//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0'); // '0'
	InitBoard(show,ROWS,COLS,'*'); // '1'
//打印出棋盘 
	DisplayBoard(show,ROW,COL); 
	 //只打印 9*9 
	
//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
		//透视挂  透视开关 
//排查雷 
	FindMine(mine,show,ROW,COL); 
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择: >");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				printf("开始扫雷\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	}while(input);
	return 0;
}
//可以优化  
//1.递归实现展开的效果 
//2.可以标记一下雷 
