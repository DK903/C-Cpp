#include <stdio.h>
void print(int n)//1234
{
	if(n>9)         //1234->123->12->1
	{
		print(n/10);//123->12->1  
	}
	
	printf("%d\n",n%10);//1,2,3,4
	//ִ����һ��֮�󷵻���һ�ε�print()�������� 
	//��С����Ҫ������������Ҫ��飬����Ҫ�Ƚ�������������С�� 
}	//�ݹ�ݹ飬�ȵ��ٹ� 
int main(){
	//1234
	//ÿλ��ӡ���� 
	//print(1234)->print(123)4->print(12)34->print(1)234 
	unsigned int num = 0;
	printf("������һ��������");
	scanf("%d",&num);
	print(num);
	return 0;
}
