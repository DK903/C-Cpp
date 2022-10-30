#include <stdio.h>
#include <string.h>//识别strlen 
int main(){
	char arr1[] = "320804200009034910";//数组
	char arr2[] = {'a','b','c'};
	//arr1 中有一个结束标志   '\0' = 0
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	
	printf("%s\n",arr1); 	
	printf("%s\n",arr2);
	return 0;
}
