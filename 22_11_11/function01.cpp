#include "stdio.h"
#include "math.h"
int is_prime(int a)
{
	//2 -> n-1 
	int j = 0;
	
	for(j = 2 ;j <= sqrt(a);j++){
		if(a%j == 0)//��һ�� j�� n������  ˵���б������
			return 0; 
	}
	return 1;
}
int main(){
	int a = 0;
	int count= 0 ;
	for(a=100;a<=200;a++)
	{
		if(is_prime(a) == 1){
		
			printf("%d ",a);
			count++;
		}	
	}
	printf("\nһ���У�%d������",count);
	return 0;
}
