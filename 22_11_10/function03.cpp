#include <stdio.h>
#include <string.h>
int main(){
	char key[] = "你是猪";
	char buffer[40];
	do{
		printf("你猜猜我是谁？"); 
		fflush(stdout);
		scanf("%39s",buffer);
		
	} while(strcmp(key,buffer) != 0);
	printf("你说对了！");
	return 0;
} 
