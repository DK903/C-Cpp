#include <stdio.h>
int main(){
	/* 
	int *p = NULL;
	p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
	char *pc = NULL;
	pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
	����ָ�� - ָ�������ָ�� - �������ĵ�ַ  
	int arr[10] = {0};
	arr-��Ԫ�صĵ�ַ 
	&arr[0]-��Ԫ�صĵ�ַ
	&arr - ����ĵ�ַ 
	*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int (*p)[10] = &arr;//����ĵ�ַҪ������
	// �����p ��������ָ��
	int i = 0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(*p+i));	
		//printf("%d ",(*p)[i]);
		
	} 
	//char* arr[5];
	//char* (*pa)[5] = &arr;//�����ָ�� 
	//pa - ָ�������
	//*˵��pa��ָ��
	//char* -- paָ��������Ԫ�������� char* 
	return 0; 
}