#include <stdio.h>
#include <string.h>
int main(){
	int i = 0;
	char pas[20]={0};
	for(i=0;i<3;i++){
		printf("���������룺>");
		scanf("%s",pas);
		if(strcmp(pas,"dengkuo0903") == 0){
			// == ���������Ƚ������ַ���
			// ���� stcmp()���� 
			printf("��¼�ɹ� :) \n");
			break;
		}
		
		else{
			printf("�����������\n");
		}
	}
	if(i == 3){
		printf("��������������þ������������ԣ�\n");
	}
		 
	return 0;
}
