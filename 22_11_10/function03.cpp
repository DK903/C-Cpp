#include <stdio.h>
#include <string.h>
int main(){
	char key[] = "������";
	char buffer[40];
	do{
		printf("��²�����˭��"); 
		fflush(stdout);
		scanf("%39s",buffer);
		
	} while(strcmp(key,buffer) != 0);
	printf("��˵���ˣ�");
	return 0;
} 
