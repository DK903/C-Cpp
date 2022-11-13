#include <stdio.h>
//求第n个斐波那契数 
//0,1,1,2,3,5,8,13,21,34,55,89...
//从第三项开始  每一项是前两项之和
int Fib1(int n){//递归 -- 倒着 
	if(n==1)
		return 0;
	else if(n<=3)
		return 1;
	else
		return Fib1(n-1)+Fib1(n-2);
}
int Fib2(int n)//迭代 -- 正着 
//  1 1 2 3 5 8 13 21 34 55 89
//	a b c 
//    a b c
{	int a=0,b=1,c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main(){
	unsigned int n =0;
	int ret1 = 0,ret2=0;
	scanf("%d",&n);
	//TDD - 测试驱动开发 
	ret1 = Fib1(n);
	printf("递归结果是：%d\n",ret1);
	ret2 = Fib2(n);
	printf("迭代结果是：%d",ret2);
	return 0;
}
