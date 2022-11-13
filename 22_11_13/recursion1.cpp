#include <stdio.h>
//史上最简单的递归 
int main(){
	printf("hehe\n");//Stack overflow 
	//stackoverflow.com 
	//需要设置条件 避免一直递归 
	main(); 
	return 0;
} 
