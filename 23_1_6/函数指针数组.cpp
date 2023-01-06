#include <stdio.h>
int Add(int x , int y){
	return x+y;
} 
int Sub(int x , int y){
	return x-y;
}
int Mul(int x , int y){
	return x*y;
}
int Div(int x , int y){
	return x/y;
}
int main(){
	int* arr[5];//指针数组 
	//需要一个数组，这个数组可以存放 4个函数的地址 -- 函数指针的数组 
	int (*parr[4])(int,int) = {Add,Sub,Mul,Div};
	int i = 0;
	for(i=0;i<4;i++){
		printf("%d\n",parr[i](3,2));
	}    // 5 1 6 1
	return 0;
} 
