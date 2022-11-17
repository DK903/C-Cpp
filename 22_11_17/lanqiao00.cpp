#include <stdio.h>
//请问要制作所有的11到2020号门牌，总共需要多少个字符2？
int main(){
	int count = 0;
	int i = 0;
	for(i=0;i<=2020;i++)
	{
		if(i%10==2)
			count++;
		if(i/10%10==2)
			count++;
		if(i/100%10==2)
			count++;
		if(i/1000%10==2)
			count++;
	}
	printf("%d",count);
	return 0;
}
