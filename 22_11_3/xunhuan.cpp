#include <stdio.h>
int main(){
	int i = 1;
	while(i<=10){
		if(i == 5)
			//continue;//����ѭ���жϲ���  -> ������ѭ�� 
			break;// ����whileѭ��  ���ټ���ѭ�� 
		printf("%d ",i);
		i++;		
	}
	printf("\n");
	printf("ѭ������\n");
	int a = 0;
	while(a<=8){
		a++;
		if(a == 5)
			continue;//��ֹ����ѭ���������жϻ���
		printf("%d ",a); //1 2 3 4 6 7 8 9 
	} 
	return 0;
}
