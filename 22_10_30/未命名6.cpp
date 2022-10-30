#include <stdio.h>

int Add(int x,int y){ //第一个int是返回类型  
	//函数体
	int z = x + y;
	return z; //计算完成后返回给sum 
}
int main(){
	int a = 12,b=20;
	int sum;
	sum = Add(a,b);//a,b的值传给x,y    
	printf("sum = %d\n",sum);
	return 0;
}
