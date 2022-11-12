#include <stdio.h>
#include <string.h>
			//本质上arr是一个指针 
int binary_search(int arr[],int k,int sz){
	//算法实现 
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//数组传参 不能这样求数组大小 
	int l = 0;
	int r = sz-1;
	while(l<=r)//2.必须是  <= 
	{	
		int m = (l+r)/2;//1.必须放在循环内 
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
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了返回这个数的下标 找不到返回-1	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1){
		printf("找不到您想查找的数字：\n");
	}
	else
		printf("找到了，下标是%d\n",k); 
	return 0;
}
//	int arr[40]; 
//	
//	int k = 0;
//	printf("请输入您的数组：");
//	scanf("%d ",&arr); 
//	
//	printf("\n");
//	printf("请输入您想查找的数字：");
////	fflush(stdout);
//	scanf("%d",&k);
