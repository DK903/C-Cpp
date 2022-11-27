#include <stdio.h>
int main(){
	int a = 0;
	char b = 'w';
	int arr[10] = { 0 };
	short c = 0;
	int d = 10;
	printf("%d\n",sizeof(c=d+5));//2
	//sizeof()的不参与运算 
	printf("%d\n",c);
	printf("%d\n",sizeof(a));        //4
	printf("%d\n",sizeof(int));     //4
	printf("%d\n",sizeof(b));      //1
	printf("%d\n",sizeof(char));  //1
	printf("%d\n",sizeof(arr));  //40
	printf("%d\n",sizeof(int [10]));//40
	return 0;
} 
