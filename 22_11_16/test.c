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
void game()//��Ϸ�������㷨ʵ�� 
{	
	char ret = 0;
	//���� -- ����߳���������Ϣ 
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ���� 
	//��ʼ����
	while(1)
	{
		PlayerMove(board,ROW,COL);//�������
		DisplayBoard(board,ROW,COL);
		//�ж���Ӯ  -- �ƶ�����
		ret = IsWin(board,ROW,COL);
		if(ret != 'C'){
			break;
		} 
		ComputerMove(board,ROW,COL);//�������� 
		DisplayBoard(board,ROW,COL);
		ret = IsWin(board,ROW,COL);
		if(ret != 'C'){
			break;
		} 
	} 
	//�ж���Ӯ
	if (ret == '*'){
		printf("���Ӯ\n");
	}
	else if (ret == '#'){
		printf("����Ӯ\n");
	} 
	else{
		printf("ƽ-----��");
	} 
	
}
void test(){
	int input = 0;
	srand((unsigned int)time(NULL));//��������� 
	do{
		menu();
		printf("��ѡ��> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("*****************�˳���Ϸ********************\n");
			break;	
		default:
			printf("ѡ�����������ѡ��\n"); 
			break;
		}
	}while(input);
}
int main() 
{
	test();
	return 0;
}
