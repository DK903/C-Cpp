#include <stdio.h>
int main(){
	int line = 0;
	printf("你要好好学习，认真敲代码\n");
	printf("请你输入你的代码行数：");
	scanf("%d",&line);
	if(line>=20000)
		printf("你有这个基础了");
	else{
	
	while(line<20000){
		printf("努力敲一行代码：%d\n",line);
		line++; 
	}
	
	}
	return 0;
}
