#include <stdio.h>
//��д����ʵ�֣���һ�������洢���ڴ��еĶ������е� 1 �ĸ��� 
int main(){
	int num = 0;
	printf("��������������� : >");
	scanf("%d",&num);
	int count = 0;
	int i = 0;
	for(i=0;i<32;i++){
		if(1 == ((num >> i) & 1))
			count++;
	}
	printf("1 �ĸ���Ϊ %d\n",count);
/*	do
	{    
		if(num % 2 == 1)//
		{	
			i++;
		}// 1
		num = num / 2 ; // 5  2  1
	}while(num);
	printf("1 �ĸ���Ϊ %d\n",i);
 �Ż��� */
	
	return 0;
}
