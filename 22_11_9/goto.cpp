#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char input[20] = {0};
	system("shutdown -s -t 120");
again:
	printf("请注意！！！！！！！您的电脑在2分钟之内关机,快输入: 我是猪\n ");
	printf("快拯救你的电脑,请输入：->"); 
	scanf("%s",&input);
	if(strcmp(input,"我是猪") == 0)
	{//string.h
		system("shutdown -a"); //stdlib.h
		printf("恭喜你解救成功！");
	}
	else{
		goto again;
	}
	return 0;
}
