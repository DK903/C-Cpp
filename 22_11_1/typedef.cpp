#include <stdio.h>
int main(){
	typedef unsigned int u_int;
	// typedef - 类型定义 - 类型重定义 -取小名 
	unsigned int a = 20;
	u_int b = 20;
	if(a==b)
		printf("a和b一样！！\n"); 
	return 0;
} 
