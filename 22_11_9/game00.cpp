#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������Ϸ
//1.��������һ���������
//2.���ǲ����֣�
//3.�н����˵� 
void menu(){
	printf("**************************************************\n");
	printf("*****      1. Start           0. Exit        *****\n");
	printf("**************************************************\n");
}
void game(){
	//1.����һ�������  2.������ 
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//���������  RAND_MAX --- 32767  ����1-100֮�� 
	//������
	while(1)
	{
		printf("�������:->");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´��ˣ�\n");
		}
		else if(guess<ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ��,�¶��ˣ�\n");
			printf("********************����������********************\n");
			break;	
		}
	} 
}
int main(){
	int input = 0;
	srand((unsigned int) time(NULL));
	//---ʱ���--- �����������������ʼ��  time_t time(time_t *timer);
	do{
		menu();
		printf("��ѡ��->:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();//��ʼ��Ϸ 
				break;
			case 0:
				printf("******************�˳���Ϸ************************\n");
				break;
			default:
				printf("*******************ѡ�����***********************\n");
				break; 
		}
	}while(input);
	return 0;
}
