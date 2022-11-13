#include <stdio.h>
void print(int n)//1234
{
	if(n>9)         //1234->123->12->1
	{
		print(n/10);//123->12->1  
	}
	
	printf("%d\n",n%10);//1,2,3,4
	//执行完一次之后返回上一次的print()函数调用 
	//生小孩需要做爱，做爱需要结婚，所以要先结婚再做爱最后生小孩 
}	//递归递归，先递再归 
int main(){
	//1234
	//每位打印出来 
	//print(1234)->print(123)4->print(12)34->print(1)234 
	unsigned int num = 0;
	printf("请输入一个正数：");
	scanf("%d",&num);
	print(num);
	return 0;
}
