#include <stdio.h>
int main(){
	int a = 110;// 4 Bytes
	&a;//get adress
	int* p = &a;
	//������ŵ�ַ�ı��� ��Ϊָ�����  ������Ϊ ����* 
	printf("%p\n",p); 
	printf("%p\n",&a);// %p not %d 
	*p ;//* - �����ò�����
	*p = 220;
	printf("%d\n",a); 
	
	double d = 3.14;
	double* pd = &d;
	*pd = 4.4;
	printf("%lf\n",*pd); //double ���float����  ��Ҫ��%lf 
	printf("%lf\n",d);
	return 0;
}
