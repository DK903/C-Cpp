#include <stdio.h>
//�������� 
int main(){
	char a = 3;
	// char���� һ���ֽ� ����
	// a - 00000011
	//	00000000000000000000000000000011
	char b = 127;
	// b - 01111111
	//  00000000000000000000000001111111
	char c = a + b;
	// a + b
	// 00000011 + 01111111
	// c - 10000010 ������������Ϊ %d 
	// �����λ�� 
	//=11111111111111111111111110000010   -- ����
	// 11111111111111111111111110000001   -- ����
	// 10000000000000000000000011111110   -- ԭ�� 
	// �� -126  
	printf("%d\n",c); 
	return 0; 
} 