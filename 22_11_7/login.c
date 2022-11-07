#include <stdio.h>
#include <string.h>
int main(){
	int i = 0;
	char pas[20]={0};
	for(i=0;i<3;i++){
		printf("请输入密码：>");
		scanf("%s",pas);
		if(strcmp(pas,"dengkuo0903") == 0){
			// == 不能用来比较两个字符串
			// 须用 stcmp()函数 
			printf("登录成功 :) \n");
			break;
		}
		
		else{
			printf("您的密码错误！\n");
		}
	}
	if(i == 3){
		printf("今日输入次数已用尽，请明天再试！\n");
	}
		 
	return 0;
}
