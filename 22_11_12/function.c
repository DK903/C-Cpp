//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
#include <stdio.h>
void Add(int *p){
	*p+=1;
	//���ߣ�*p��++;Ҫע����������ȼ� 
}
int main(){
	int num = 0;
	Add(&num);//��ַ���ã������ڲ���Ҫ�ı� num��ֵ 
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
} 
