#include <stdio.h>
#include <string.h>
//����һ��λ�����10000������  �ж����Ƿ�Ϊż�� 
char a[10001]; 
int main(){
	scanf("%s",a);
	int len = strlen(a);
	if((a[len -1]-'0') % 2 == 0){
		printf("YES\n"); 
	}
	else{
		printf("NO\n");
	}
	return 0;
}
