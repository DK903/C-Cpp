#include  <stdio.h>
//��������� 
int main(){
	int m = 24;
	int n = 18;
	int r = 0;
	printf("��������������");
	scanf("%d%d",&m,&n); 
	while(r=m%n)//m%n =0  ������Ϊ��  ����ѭ�� 
	{
		m=n;
		n=r;
	} 
	printf("�������Ϊ��%d\n",n); 
	return 0;
}
