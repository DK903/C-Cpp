#include <stdio.h>
//��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);
//���ܣ���v[0]<=v[1]<=...<=v[n-1]�������в���x 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int k = 17;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = 0;i < sz; i++){
		if(k == arr[i]){
			printf("�ҵ��ˣ��±���: %d\n",i);
			break;//������ 
		}
	}
	if(i == sz)
		printf("�Ҳ���\n");
	return 0;
}
