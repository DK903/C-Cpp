#include <stdio.h>
int main(){
	int i = 0 , j = 0;
	for(;i<10;i++){
		for(;j<10;j++){// 省略了j=0
		//  在i=1时，循环体循环9次后，j=10不会被改变 
			printf("hehe\n");
		}
	} 
	return 0;
}
