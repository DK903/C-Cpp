#include <stdio.h>
// 1-100中带9的个数 
int main(){
	int i = 0;
	int count = 1;
	for(i=1;i<=100;i++)
	{
		if(i%10==9||i/10==9)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n带9的数有：%d个\n",count);
	return 0;
}
