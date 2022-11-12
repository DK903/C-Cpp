#include <stdio.h>//
#include "Add.h"//先：函数声明 
int main(){
	int a = 22;//------合理------- 
	int b =	21;
	int sum = Add(a,b);//后：函数调用 
	printf("%d\n",sum);
	return 0;
}
