#include <stdio.h>
int main(){
	char ch = 'w';
	char* pc = &ch;
	*pc = 'r';// ָ���С��64λ--8bytes ָ�����ֽ�pc 
	printf("%c\n",ch);
	printf("%d\n",sizeof(char*));//8
	printf("%d\n",sizeof(short*));//8
	printf("%d\n",sizeof(int*));//8
	printf("%d\n",sizeof(double*));//8
	return 0;
}
