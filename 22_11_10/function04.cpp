#include <stdio.h>
#include <string.h>
int main(){
	//memset 
	//void * memset ( void * ptr, int value, size_t num );
	//�� ptrָ��Ŀռ�ǰ num���ַ����ó� value ��
	char arr[] = "hello world";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
}
