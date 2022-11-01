#include <stdio.h>
void test(){
	static int a = 1;// static 把 a变成一个静态的局部变量 
	//使局部变量的生命周期变长 
	//修饰全局变量会改变其作用域,让静态的全局变量只能在自己所
	//在的源文件内部使用 
	//函数：static改变其链接属性（外部--->内部） 
	a++;
	printf("a=%d\n",a);//2 3 4 5 6 
}//局部变量 a 始终是 a = 1;  出了括号生命周期就结束 
int main(){
	int i = 0;
	while (i<5){
		test();
		i++;
	}
	return 0;
}
