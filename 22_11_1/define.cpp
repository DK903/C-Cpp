#include <stdio.h>
// #define  定义标识符常量 
#define J 15
// #define 可以定义宏 - 带参数  
//与函数不同 
#define MAX(X,Y) (X>Y?X:Y)
int main(){
	int max;
	int a = 6,b = 7;
	max = MAX(a,b);
	printf("%d\n",max);
	return 0;
}
