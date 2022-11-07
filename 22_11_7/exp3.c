#include <stdio.h>
//在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,int v[],int n);
//功能：在v[0]<=v[1]<=...<=v[n-1]的数组中查找x 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int k = 17;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = 0;i < sz; i++){
		if(k == arr[i]){
			printf("找到了，下标是: %d\n",i);
			break;//跳出来 
		}
	}
	if(i == sz)
		printf("找不大到\n");
	return 0;
}
