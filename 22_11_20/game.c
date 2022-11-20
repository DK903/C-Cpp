#include "game.h"
void InitBoard(char board[ROWS][COLS],int rows ,int cols,char set){
	int i = 0;
	int j = 0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			board[i][j] = set;//������һ��������ó�ʼ�������� 
		}
	}
}
void DisplayBoard(char board[ROWS][COLS],int row,int col){//ֻ�����ӡ 
	int i = 0;
	int j = 0;
	printf("----------------ɨ����Ϸ---------------------\n");
	//��ӡ�к�
	for(i=0;i<=col;i++){
		printf("%d ",i);
	} 
	printf("\n");
	for(i=1;i<=row;i++){
		printf("%d ",i);//�к� 
		for(j=1;j<=col;j++){
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("----------------ɨ����Ϸ---------------------\n");
}

void SetMine(char mine[ROWS][COLS],int row,int col){
	int count = COUNT_MODEL;
	while(count)
	{
		//����������±�
		int x = rand()%row+1;
		int y = rand()%col+1; 
		if(mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//static ֻ�ڱ��ļ�����ʾ  �����ļ�ʹ�ò��� 
//1. ���ξֲ����� 
//2. ����ȫ�ֱ��� 
//3. ���κ��� 
static int get_mine_count(char mine[ROWS][COLS],int x,int y){//  ���� -- �������� 
	return mine[x-1][y] +
		   mine[x-1][y-1] +
		   mine[x][y-1] +
		   mine[x+1][y-1] +
		   mine[x+1][y] +
		   mine[x+1][y+1] +
		   mine[x][y+1] +
		   mine[x-1][y+1] - 8*'0'; 
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col){
	//1.�����Ų������
	//2.������괦�Ƿ�����  
		//  1 --- ը����  ����
		//  0 --- ���ź� ��û��ը��  -- �洢�Ų��׵���Ϣ��show���飬��Ϸ���� 
	int x = 0;
	int y = 0;	
	int win = 0; 
	while(win<row*col - COUNT_MODEL)
	{	
		printf("������Ҫ�Ų������ : >");
		scanf("%d %d",&x,&y);//x��y -- (1,9)
		//�ж�����ĺϷ���
		if(x >= 1 && x <= row && y>= 1 && y<= col) 
		{// 1 - 9    1 - 9
			if(mine[x][y] == '1')//������� 
			{
				printf("���ź����㱻ը���ˣ�����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{//�����׵�����£�ͳ�� x,y������Χ�м�����
				int count = get_mine_count(mine, x, y);  
				show[x][y] = count+'0';//ASCII �� -- ��� 
				DisplayBoard(show,row,col);
				//��ʾһ���Ų���Ϣ 
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������!!!\n");
		}
	}
	if(win == row*col - COUNT_MODEL)
	{
		printf("��ϲ�㣬���׳ɹ�������\n");
		DisplayBoard(show,row,col);
	}
}








