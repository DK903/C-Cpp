#include <stdio.h>
#include <math.h>
//������� pro max 100-200֮������� 
int main(){
	int count = 0;
	int i = 0;
	for(i=101;i<=200;i+=2)
	{
		int j = 0;
		for(j=2;j<=sqrt(i);j++)// i = a*b  a �� b ��������һ������<= ��ƽ��i 
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d ",i);
		 } 
	}
	printf("\n count: %d\n",count);
	return 0;
} 
