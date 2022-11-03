#include <stdio.h>
int main(){
	int i = 1;
	while(i<=10){
		if(i == 5)
			//continue;//继续循环判断部分  -> 陷入死循环 
			break;// 跳出while循环  不再继续循环 
		printf("%d ",i);
		i++;		
	}
	printf("\n");
	printf("循环二：\n");
	int a = 0;
	while(a<=8){
		a++;
		if(a == 5)
			continue;//终止本次循环，跳到判断环节
		printf("%d ",a); //1 2 3 4 6 7 8 9 
	} 
	return 0;
}
