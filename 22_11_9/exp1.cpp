#include <stdio.h>
// 1-100�д�9�ĸ��� 
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
	printf("\n��9�����У�%d��\n",count);
	return 0;
}
