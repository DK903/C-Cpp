#include <stdio.h>
int main(){
	//1-10
	int i = 1;
	do{
	//	if(i==5)
		//	continue;������i++��ѭ��  ������ѭ���� 
		printf("%d ",i);// 1 2 3  ...9
		i++;//2 3 4 ... 9  10
	}
	while(i<10);
	
	return 0;
}
