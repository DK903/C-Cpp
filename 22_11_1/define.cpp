#include <stdio.h>
// #define  �����ʶ������ 
#define J 15
// #define ���Զ���� - ������  
//�뺯����ͬ 
#define MAX(X,Y) (X>Y?X:Y)
int main(){
	int max;
	int a = 6,b = 7;
	max = MAX(a,b);
	printf("%d\n",max);
	return 0;
}
