#include <stdio.h>
#include <string.h>
int main(){
	char arr[] = "abcdef";//  a b c d e f \0
	printf("%d\n",sizeof(arr));//sizeof(arr)���������Ĵ�С ��λ���ֽ� 7
	printf("%d\n",sizeof(arr + 0)); // ������ǵ�ַ�Ĵ�С  4/8 
						//���������Ԫ�صĵ�ַ  arr+0 
	printf("%d\n",sizeof(*arr)); // �����ò���--��Ԫ�صĴ�С--1
	printf("%d\n",sizeof(arr[1]));  //  1
	printf("%d\n",sizeof(&arr));// �����ַ��С  4/8
	printf("%d\n",sizeof(&arr+1));//���ʻ��ǵ�ַ  ��СΪ4/8���ֽ� 
					//&arr+1���������������ĵ�ַ 
	printf("%d\n",sizeof(&arr[0]+1));//4/8
	printf("------------------------\n");
	printf("%d\n",strlen(arr));//  ��������Ϊa b c d e f ���� 6��
	printf("%d\n",strlen(arr+0)); // 6
	//printf("%d\n",strlen(*arr)); err �Ƿ������ڴ�
	//printf("%d\n",strlen(arr[1])); ͬ�� 
	//printf("%d\n",strlen(&arr));6 &arr����ĵ�ַӦ����char* p[7]=&arr;��� 
	//printf("%d\n",strlen(&arr+1));���ֵ 
	printf("%d\n",strlen(&arr[0]+1)); //5
	return 0;
}
