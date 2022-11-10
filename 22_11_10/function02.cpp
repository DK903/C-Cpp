#include <stdio.h>
#include <string.h>
/*
	ret_type fun_name(para1,*)
	{
		statement;  语句项 
	}
	ret_type  返回类型
	fun_name  函数名
	para1    函数参数 
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
