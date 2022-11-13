#include <stdio.h>
//求 n 的阶乘
int Fac1(int n)//循环 
{
	int i = 0 ;
	int ret = 1;
	for(i=1;i<=n;i++)
	{
		ret*=i;
	}
	return ret;
}
int Fac2(int n)//递归 
{	
	if(n<=1){//5
		return 1;
	}
	else
		return n*Fac2(n-1);
}
int main(){
	int n = 0;int m = 0;
	int ret1 = 0;int ret2 = 0;
	scanf("%d",&n);
	ret1 = Fac1(n);//循环的函数
	printf("N1的阶阶乘为：%d\n",ret1);
	ret2 = Fac2(n);//循环的函数
	printf("N2的阶阶乘为：%d",ret2); 
	return 0;
} 
