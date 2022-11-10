#include <stdio.h>
#include <string.h>
int main(){
	//memset 
	//void * memset ( void * ptr, int value, size_t num );
	//把 ptr指向的空间前 num个字符设置成 value 、
	char arr[] = "hello world";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
}
