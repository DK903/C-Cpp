#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char input[20] = {0};
	system("shutdown -s -t 120");
again:
	printf("��ע�⣡���������������ĵ�����2����֮�ڹػ�,������: ������\n ");
	printf("��������ĵ���,�����룺->"); 
	scanf("%s",&input);
	if(strcmp(input,"������") == 0)
	{//string.h
		system("shutdown -a"); //stdlib.h
		printf("��ϲ���ȳɹ���");
	}
	else{
		goto again;
	}
	return 0;
}
