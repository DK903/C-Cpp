#include "game.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*********************************************\n");
	printf("*********1. play             0.exit**********\n");
	printf("*********************************************\n");
}

// �� -- �ַ� 1  
// ���� -- �ַ� 0 
void game(){
//�������� 11*11 ʵ�� 9*9 ���� 
//1.��Ų��úõ��׵���Ϣ    char
//2.����Ų�����׵���Ϣ	char
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0}; 
//��ʼ������
	InitBoard(mine,ROWS,COLS,'0'); // '0'
	InitBoard(show,ROWS,COLS,'*'); // '1'
//��ӡ������ 
	DisplayBoard(show,ROW,COL); 
	 //ֻ��ӡ 9*9 
	
//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
		//͸�ӹ�  ͸�ӿ��� 
//�Ų��� 
	FindMine(mine,show,ROW,COL); 
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��: >");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				printf("��ʼɨ��\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	}while(input);
	return 0;
}
//�����Ż�  
//1.�ݹ�ʵ��չ����Ч�� 
//2.���Ա��һ���� 
