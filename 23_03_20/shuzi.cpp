#include <stdio.h>
#include <string.h>
//给你一个位数多达10000的整数  判断其是否为偶数 
char a[10001]; 
int main(){
	scanf("%s",a);
	int len = strlen(a);
	if((a[len -1]-'0') % 2 == 0){
		printf("YES\n"); 
	}
	else{
		printf("NO\n");
	}
	return 0;
}
