#include <stdio.h>
int main(){
	int input = 0;
	printf("你要好好学习吗？(选择1/0)>:");
	scanf("%d",&input);//读取用户输入的数字 
	if(input == 1)
		printf("坚持，你会年薪300k\n"); 
	else
		printf("你没得选，必须好好学习\n");
	
	return 0;
}
