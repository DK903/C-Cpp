#include <stdio.h>
void test(int arr[3][5]){
	
}
void test1(int arr[][5]){//行可以省略  列不可以省略 
	
}
void test2(int (*arr)[5]){
	
}
int main(){
	int arr[3][5] = {0};
	test(arr);// 二维数组传参 
	test1(arr);
	test2(arr); 
	return 0;
} 
