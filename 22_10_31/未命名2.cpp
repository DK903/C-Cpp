#include <stdio.h>
int main(){
	int a = 0, b=1,c=5,d=-1;
	// 逻辑与 
	int x = a && b ;//  0  为假
	int y = b && d ;// 非0  为真 
	printf("%d\n",x); 
	printf("%d\n",y);
	return 0;
	
}
