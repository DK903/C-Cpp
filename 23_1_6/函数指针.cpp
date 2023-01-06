#include <stdio.h>
//typedef void(*pfun_t)(int);
//void (*signal(int, void(*)(int)))(int);
//等价于
//pfun_t signal(int,pfun_t) 
int Add(int x,int y)
{
	return x+y;
}
void Print(char* str){
	printf("%s\n",str);
}
int main(){
	int a = 1;
	int b = 2;
	printf("%d\n",Add(a,b));
	printf("%p\n",&Add); //函数地址 
	printf("%p\n",Add); // 一模一样   都是函数的地址 
	int (*pa)(int,int) = Add; 
	printf("%d\n",(*pa)(5,5));//通过地址调用函数 
	void (*p)(char*) = Print;// *p 函数指针 + 参数类型 
	(*p)("hello bit");
	return 0;
}
