#include <stdio.h>
#include <string.h>
			//������arr��һ��ָ�� 
int binary_search(int arr[],int k,int sz){
	//�㷨ʵ�� 
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//���鴫�� ���������������С 
	int l = 0;
	int r = sz-1;
	while(l<=r)//2.������  <= 
	{	
		int m = (l+r)/2;//1.�������ѭ���� 
		if(arr[m] < k){
			l = m+1;
		}
		else if(arr[m] > k){
			r = m-1;
		}
		else{
			return m;
		}
	}
	return -1;
	
}
int main(){
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷�����������±� �Ҳ�������-1	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1){
		printf("�Ҳ���������ҵ����֣�\n");
	}
	else
		printf("�ҵ��ˣ��±���%d\n",k); 
	return 0;
}
//	int arr[40]; 
//	
//	int k = 0;
//	printf("�������������飺");
//	scanf("%d ",&arr); 
//	
//	printf("\n");
//	printf("������������ҵ����֣�");
////	fflush(stdout);
//	scanf("%d",&k);
