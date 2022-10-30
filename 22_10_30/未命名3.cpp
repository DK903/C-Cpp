#include <stdio.h>
#include <string.h>
//转义字符 
int main(){
	printf("abc\\n");
	printf("\a\n"); 
	printf("");
	printf("\60\n");//2个8进制数表示的十进制对应的ASCII 
	//\ddd 八进制
	printf("\x61\n"); 
	//\xdd 十六进制 
	
	//  斜杠转义斜杆  让斜杠就是个斜杠
	printf("%d\n",strlen("c:\test\32\test.c")); 
	return 0;
}
