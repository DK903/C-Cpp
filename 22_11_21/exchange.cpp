#include <stdio.h>
//���ܴ�����ʱ������ʵ���������Ľ��� 
int main(){
	int a = 3 ;
	int b = 5 ;
	printf("before : a = %d b = %d\n",a,b);
/*	a = a + b ;
	b = a - b ;
	a = a - b ;	  -- ���ܻ����    */
	a = a^b;  // a = 6
	b = a^b;  // b = 3
	a = a^b;  // a = 5    niu bi!
	printf("after : a = %d b = %d\n",a,b);
	
	return 0;
} 
