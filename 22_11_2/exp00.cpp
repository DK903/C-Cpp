#include <stdio.h>
int main(){
	char ch = 'w';
	char* pc = &ch;
	*pc = 'r';// 指针大小在64位--8bytes 指针名字叫pc 
	printf("%c\n",ch);
	printf("%d\n",sizeof(char*));//8
	printf("%d\n",sizeof(short*));//8
	printf("%d\n",sizeof(int*));//8
	printf("%d\n",sizeof(double*));//8
	return 0;
}
