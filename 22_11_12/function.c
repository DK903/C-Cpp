//写一个函数，每调用一次这个函数，就会将num的值增加1
#include <stdio.h>
void Add(int *p){
	*p+=1;
	//或者（*p）++;要注意运算符优先级 
}
int main(){
	int num = 0;
	Add(&num);//传址调用：函数内部需要改变 num的值 
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
} 
