#include <stdio.h>
// 100 - 200 �� ���� 
int main(){
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++){
		int j = 0;
		for(j=2;j<i;j++){
			if(i%j == 0)
				break;
		}
		if(j==i){
			count++;
			printf("%d ",i);
		}
	}
	printf("\n count : %d\n",count);
	return 0;
}
