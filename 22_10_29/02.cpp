#include <stdio.h>

int num2 = 10;//全局变量  在{}之外的变量 
int main(){
	
	int num2 = 20;//局部变量 
	printf("%d",num2);//可以同时存在，局部变量优先 
	return 0;
}
