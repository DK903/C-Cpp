#include <stdio.h>
#include <string.h>
int main (){
	//����һ������ - ������� - 10�� 
	int arr[10] = {1,2,3 };//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ 0 
	char arr2[5] = {'a','b',98};//ASCII ��ֵ 
	char arr3[5] = "ab";//�����ϴ���3��Ԫ�� ����һ��\0 
	char arr4[] = "abcdef";
	printf("sizeof : %d\n",sizeof(arr4));
	//���� arr4��ռ�ռ�Ĵ�С --������ 
	printf("strlen : %d\n",strlen(arr4));
	//���ַ����ĳ���  --- '\0' ֮ǰ���ַ�����--�⺯��--����ͷ�ļ� 
	return 0;
}  
