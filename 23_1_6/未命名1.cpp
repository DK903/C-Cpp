#include <stdio.h>
void test(int arr[3][5]){
	
}
void test1(int arr[][5]){//�п���ʡ��  �в�����ʡ�� 
	
}
void test2(int (*arr)[5]){
	
}
int main(){
	int arr[3][5] = {0};
	test(arr);// ��ά���鴫�� 
	test1(arr);
	test2(arr); 
	return 0;
} 
