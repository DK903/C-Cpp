#include <stdio.h>
int Add(int x,int y);//函数声明 
int main(){//调用前要先声明 
	int a = 10;
	int b = 20;
	//函数调用 
	int sum =Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
} 
// 函数定义 
int Add(int a,int b){
	return a+b;
}
