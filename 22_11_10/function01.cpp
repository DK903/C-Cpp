#include <stdio.h>
#include <string.h>
int main(){
	//strcpy  -- �ַ������� 
	//char * strcpy ( char * destination, const char * source );
	// Դͷ��Ŀ�ĵس�  �ַ�������� 
	//strcmp  -- �ַ����Ƚ� 
	//int strcmp ( const char * str1, const char * str2 );
	char arr1[] = "coolcool";
	char arr2[] = "###########";
	strcpy(arr2,arr1);//�� arr1�е��ַ��ŵ� arr2��
	// arr1 < arr2 
	//����  be copied
	printf("%s\n",arr2); 
	return 0;
}
