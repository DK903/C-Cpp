#include <stdio.h>
//��ʮ���������ֵ 
int main(){
	int arr[] = {-1,-2,-3,-4,-5,-66,-7,-8,-9,-999,0};

	int max = arr[0];//���������е�ĳһ������ max
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
} 
