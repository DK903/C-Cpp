#include <stdio.h>
int main(){
	short int a = 16 ;
	short int x = -1; // �����ڴ����ǲ������ʽ 
	// 	   1000000000000001 -- ԭ�� 
	//	   1111111111111110 -- ����
	//     1111111111111111 -- ���� 
	int b = a >> 2;// ��2 
	//     |0000000000010000|
	//     |0000000000001000|0
	// �������ƣ��ұ߶�������߲�ԭ����λ 
	int c = a << 1;
	int y = x >> 1;// ��2  
	//     |0000000000010000|
	//    0|0000000001000000|-- �� 0  
	// ��߶������ұ߲� 0 
	printf("%d\n",b);
	printf("%d\n",y);
	printf("%d\n",c);
	return 0;
}