#include <stdio.h>
#include <string.h>
int main(){
	//      1           2           43  
	printf("%d",printf("%d",printf("%d",43)));//4321
	//printf����ֵ�Ǵ�ӡ�ַ����� 
	printf("\n*******************************\n"); 
	int len = 0;
	int len1 =0;
	len = strlen("abc");
	printf("len = %d\n",len);
	printf("%d\n",strlen("abc")); //��ʽ���� 
	len1 = sizeof("abc");//�ַ���ĩβ�� \0  Ҳ��һ�� 
	printf("%d ",len1);
	return 0;
} 
