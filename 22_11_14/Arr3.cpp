#include <stdio.h>
#include <string.h>
int main(){
	char arr[]="abcdefg";
	int i = 0;
	int len = strlen(arr);
	for(i=0;i<len;i++)
		printf("%c ",arr[i]);//����ı��� 
	return 0;
}
