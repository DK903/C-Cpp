#include <stdio.h>
int main(){
	int a = 0;
	printf("请输入一个数：");
	scanf("%d",&a);
	if(a%2==1){
		printf(" %d 为奇数\n",a);
	}
	else
		printf("请重新输入一个数\n"); 
	return 0;
}
