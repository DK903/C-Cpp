#include <stdio.h>
#include <string.h>
/*
	ret_type fun_name(para1,*)
	{
		statement;  ����� 
	}
	ret_type  ��������
	fun_name  ������
	para1    �������� 
*/
int getmax(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}
int main(){
	int x = 110;
	int y = 220;
	int max = getmax(x,y);
	printf("max ->: %d\n",max);	
	return 0;
}
