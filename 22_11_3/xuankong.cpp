#include <stdio.h>
int main(){
	int a = 0;
	int b = 2;
	if(a == 1){
		if(b == 2)
			printf("jjjj\n");
	}//  加上括号完美解决 
		else
			printf("gggg\n");//  什么都没有输出 
	// else 与最近的 未匹配的 if 匹配 
	return 0;
}
