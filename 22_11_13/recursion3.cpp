#include <stdio.h>
//��д��������������ʱ���������ַ����ĳ���
//int my_strlen(char * str)
//{
//	int count = 0;
//	while(*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ���    ���򵥡� 
int my_strlen(char* str){
	if(*str !='\0')
		return 1+my_strlen(str+1);
	else
		return 0; 
} 
int main(){
	char arr[] = "bitno1";
	int len = my_strlen(arr);
	//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d",len); 
	return 0;
} 
