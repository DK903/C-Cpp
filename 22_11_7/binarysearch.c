#include <stdio.h>
//�۰�����㷨  or ���ֲ����㷨 
// binary search 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int k = 7;
	//1  2  3  4  5  6  7  8  9  0 
	//0  1  2  3  4  5  6  7  8  9 
	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ��� 
	int left = 0;//���±� 
	int right = sz - 1;//���±�
	
	while(left<= right){
		int mid = (left + right)/2;
		if(arr[mid] > k){
			right = mid - 1;
		}
		else if(arr[mid] < k ){
			left = mid + 1;
		} 
		else{
			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
			break;
		}
	}
	if(left>right){
		printf("������û�и�Ԫ��"); 
	}
	 
	return 0;
}