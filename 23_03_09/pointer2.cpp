#include <stdio.h> 
#include <string.h>
int main(){
	char *p = "abcdef";
	printf("%d\n",sizeof(p)); // 4/8 - ����ָ����� p�Ĵ�С  
	printf("%d\n",sizeof(p+1)); //4/8 - p+1 �õ������ַ� b�ĵ�ַ 
	printf("%d\n",sizeof(*p)); // 1  *p �����ַ����ĵ�һ���ַ� 'a' 
	printf("%d\n",sizeof(p[0])); //1 int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	printf("%d\n",sizeof(&p)); // 4/8 -��ַ 
	printf("%d\n",sizeof(&p +1)); // 4/8 -��ַ 
	printf("%d\n",sizeof(&p[0] + 1)); // 4/8 -��ַ
	printf("----------------------\n"); 
	printf("%d\n",strlen(p)); // 6  p��ľ����ַ��� 
	printf("%d\n",strlen(p + 1)); // 5 �� b��ʼ 
	//printf("%d\n",strlen(*p)); // err 
	//printf("%d\n",strlen(p[0])); // err
	//printf("%d\n",strlen(&p));// ָ��p�ĵ�ַ --���ֵ 
	//printf("%d\n",strlen(&p+1));// ���ֵ 
	printf("%d\n",strlen(&p[0]+1)); // 5  �� b��ʼ�� 
	printf("-----��ά����----------\n");
	int a[3][4] = {0};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0][0]));
	printf("%d\n",sizeof(a[0]+1));
	printf("%d\n",sizeof(*(a[0]+ 1));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(*(a+1)));
	printf("%d\n",sizeof(&a[0]+1));
	printf("%d\n",sizeof(*(&a[0]+1)));
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(a[3]));
	return 0;
}
