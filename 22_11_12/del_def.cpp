#include <stdio.h>
int Add(int x,int y);//�������� 
int main(){//����ǰҪ������ 
	int a = 10;
	int b = 20;
	//�������� 
	int sum =Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
} 
// �������� 
int Add(int a,int b){
	return a+b;
}
