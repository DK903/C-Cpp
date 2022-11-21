#include <stdio.h>
//编写代码实现：求一个整数存储在内存中的二进制中的 1 的个数 
int main(){
	int num = 0;
	printf("请输入您想检测的数 : >");
	scanf("%d",&num);
	int count = 0;
	int i = 0;
	for(i=0;i<32;i++){
		if(1 == ((num >> i) & 1))
			count++;
	}
	printf("1 的个数为 %d\n",count);
/*	do
	{    
		if(num % 2 == 1)//
		{	
			i++;
		}// 1
		num = num / 2 ; // 5  2  1
	}while(num);
	printf("1 的个数为 %d\n",i);
 优化： */
	
	return 0;
}
