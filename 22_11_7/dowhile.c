#include <stdio.h>
int main(){
	//1-10
	int i = 1;
	do{
	//	if(i==5)
		//	continue;跳过了i++的循环  陷入死循环了 
		printf("%d ",i);// 1 2 3  ...9
		i++;//2 3 4 ... 9  10
	}
	while(i<10);
	
	return 0;
}
