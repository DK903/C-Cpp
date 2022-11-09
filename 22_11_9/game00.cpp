#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏
//1.电脑生成一个随机数；
//2.我们猜数字；
//3.有交互菜单 
void menu(){
	printf("**************************************************\n");
	printf("*****      1. Start           0. Exit        *****\n");
	printf("**************************************************\n");
}
void game(){
	//1.生成一个随机数  2.猜数字 
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成随机数  RAND_MAX --- 32767  建议1-100之间 
	//猜数字
	while(1)
	{
		printf("请猜数字:->");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了！\n");
		}
		else if(guess<ret)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你,猜对了！\n");
			printf("********************返回主界面********************\n");
			break;	
		}
	} 
}
int main(){
	int input = 0;
	srand((unsigned int) time(NULL));
	//---时间戳--- 设置随机数的生成起始点  time_t time(time_t *timer);
	do{
		menu();
		printf("请选择->:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();//开始游戏 
				break;
			case 0:
				printf("******************退出游戏************************\n");
				break;
			default:
				printf("*******************选择错误***********************\n");
				break; 
		}
	}while(input);
	return 0;
}
