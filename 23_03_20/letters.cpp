//字符串处理 大小写转换
#include <stdio.h>
#include <string.h>
char str[1001];
int main(){
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if(str[i] == 'z'){
			str[i] = 'a';
		}
		else if(str[i] == 'Z'){
			str[i] = 'A';
		}
		else if(str[i] >='a' && 
				str[i] <'z' ||
				str[i] >='A' &&
				str[i] <'Z'){
			str[i]++;
		}
	}
	printf("%s\n",str);
	return 0;
} 
