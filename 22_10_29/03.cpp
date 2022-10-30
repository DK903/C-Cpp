#include <stdio.h>
int main(){
	int a,b;
	printf("请输入两个数字：\n");
	scanf("%d%d",&a,&b);//取地址符号& 
	int sum = a + b;
	printf("sum = %d",sum);
	
	return 0;
}
