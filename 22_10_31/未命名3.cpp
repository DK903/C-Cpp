#include <stdio.h>
int main(){
	// exp1? exp2(T):exp3(F) 
	int a = 20, b = 22;int max = 0;
	if (a>b){
		max = a;
	}
	else{
		max = b;
	}
	int max1 = (a>b?a:b);//����������or��Ŀ������ 
	printf("%d\n",max);
	printf("%d\n",max1);
	return 0;
}
