#include <stdio.h>
int main(){
	int i = 0, j = 0;
	int n = 0;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			n=i*j;
			printf("%d*%d=%-2d ",i,j,n);
			//%2d -- ��λ�Ҷ���
			//%-2d -- ��λ����� 
		}
		printf("\n");
	}
	return 0;
}
