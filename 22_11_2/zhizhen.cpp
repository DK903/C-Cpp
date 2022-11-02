#include <stdio.h>
int main(){
	int a = 110;// 4 Bytes
	&a;//get adress
	int* p = &a;
	//用来存放地址的变量 成为指针变量  其类型为 类型* 
	printf("%p\n",p); 
	printf("%p\n",&a);// %p not %d 
	*p ;//* - 解引用操作符
	*p = 220;
	printf("%d\n",a); 
	
	double d = 3.14;
	double* pd = &d;
	*pd = 4.4;
	printf("%lf\n",*pd); //double 输出float类型  需要用%lf 
	printf("%lf\n",d);
	return 0;
}
