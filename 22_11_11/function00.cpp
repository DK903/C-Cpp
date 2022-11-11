#include "stdio.h"
//写一个函数 可以交换两个变量的值 
void Swap1(int x,int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;	
} //didn't work 
void Swap2(int* pa,int* pb) //void 表示返回为空 
{
	int tmp = 0 ;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	
}
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d",a,b);
	//调用函数Swap 1
	Swap1(a,b);//传值调用 
	printf("\na=%d,b=%d",a,b);
	Swap2(&a,&b);//传址调用 
	printf("\na=%d,b=%d",a,b);
	return 0;
} 
