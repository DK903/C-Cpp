#include "stdio.h"
//дһ������ ���Խ�������������ֵ 
void Swap1(int x,int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;	
} //didn't work 
void Swap2(int* pa,int* pb) //void ��ʾ����Ϊ�� 
{
	int tmp = 0 ;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	
}
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d",a,b);
	//���ú���Swap 1
	Swap1(a,b);//��ֵ���� 
	printf("\na=%d,b=%d",a,b);
	Swap2(&a,&b);//��ַ���� 
	printf("\na=%d,b=%d",a,b);
	return 0;
} 
