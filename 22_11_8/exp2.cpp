#include  <stdio.h>
//求最大公因数 
int main(){
	int m = 24;
	int n = 18;
	int r = 0;
	printf("请输入两个数：");
	scanf("%d%d",&m,&n); 
	while(r=m%n)//m%n =0  即条件为真  进行循环 
	{
		m=n;
		n=r;
	} 
	printf("最大公因数为：%d\n",n); 
	return 0;
}
