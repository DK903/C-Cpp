#include "stdio.h"
#include "math.h"
int is_prime(int a)
{
	//2 -> n-1 
	int j = 0;
	
	for(j = 2 ;j <= sqrt(a);j++){
		if(a%j == 0)//有一个 j把 n整除了  说明有别的因子
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
	printf("\n一共有：%d个素数",count);
	return 0;
}
