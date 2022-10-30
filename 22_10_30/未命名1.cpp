#include <stdio.h>
enum Color{
	Yellow,
	Green,
	Blur
}; 


int main(){
	int a = 4;
	printf("%d\n",a);
	
	a =10;//变量可变 
	printf("%d\n",a);
	
	const int b = 22;//const修饰的常变量不可变 
	//b=20;   不可修改  b为ron 
	printf("%d\n",b); 
	
	enum Color color = Green;
	printf("%d\n",color);
	return 0;
}
