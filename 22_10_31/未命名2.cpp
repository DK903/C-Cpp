#include <stdio.h>
int main(){
	int a = 0, b=1,c=5,d=-1;
	// �߼��� 
	int x = a && b ;//  0  Ϊ��
	int y = b && d ;// ��0  Ϊ�� 
	printf("%d\n",x); 
	printf("%d\n",y);
	return 0;
	
}
