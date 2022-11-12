#include <stdio.h>
#include <string.h>
int main(){
	//      1           2           43  
	printf("%d",printf("%d",printf("%d",43)));//4321
	//printf返回值是打印字符个数 
	printf("\n*******************************\n"); 
	int len = 0;
	int len1 =0;
	len = strlen("abc");
	printf("len = %d\n",len);
	printf("%d\n",strlen("abc")); //链式访问 
	len1 = sizeof("abc");//字符串末尾的 \0  也算一个 
	printf("%d ",len1);
	return 0;
} 
