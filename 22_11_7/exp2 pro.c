#include <stdio.h>
//求 1!+2!+3!+...+10！
int main(){
	int n=0;
	int ret=1;
	int sum=0;
	int num=0;
	printf("请输入一个差不多的数：");
	scanf("%d",&num);
	for(n=1; n<=num; n++){
		
		ret = ret * n;// 1  2 6
		sum = sum + ret;// 1 3 9
		
	}
	printf("sum=%d\n",sum);
	
	return 0;
}
