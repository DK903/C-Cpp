#include <stdio.h>
//typedef void(*pfun_t)(int);
//void (*signal(int, void(*)(int)))(int);
//�ȼ���
//pfun_t signal(int,pfun_t) 
int Add(int x,int y)
{
	return x+y;
}
void Print(char* str){
	printf("%s\n",str);
}
int main(){
	int a = 1;
	int b = 2;
	printf("%d\n",Add(a,b));
	printf("%p\n",&Add); //������ַ 
	printf("%p\n",Add); // һģһ��   ���Ǻ����ĵ�ַ 
	int (*pa)(int,int) = Add; 
	printf("%d\n",(*pa)(5,5));//ͨ����ַ���ú��� 
	void (*p)(char*) = Print;// *p ����ָ�� + �������� 
	(*p)("hello bit");
	return 0;
}
