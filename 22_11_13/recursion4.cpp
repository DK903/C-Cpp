#include <stdio.h>
//�� n �Ľ׳�
int Fac1(int n)//ѭ�� 
{
	int i = 0 ;
	int ret = 1;
	for(i=1;i<=n;i++)
	{
		ret*=i;
	}
	return ret;
}
int Fac2(int n)//�ݹ� 
{	
	if(n<=1){//5
		return 1;
	}
	else
		return n*Fac2(n-1);
}
int main(){
	int n = 0;int m = 0;
	int ret1 = 0;int ret2 = 0;
	scanf("%d",&n);
	ret1 = Fac1(n);//ѭ���ĺ���
	printf("N1�Ľ׽׳�Ϊ��%d\n",ret1);
	ret2 = Fac2(n);//ѭ���ĺ���
	printf("N2�Ľ׽׳�Ϊ��%d",ret2); 
	return 0;
} 
