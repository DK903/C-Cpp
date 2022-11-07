#include <stdio.h>
//折半查找算法  or 二分查找算法 
// binary search 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int k = 7;
	//1  2  3  4  5  6  7  8  9  0 
	//0  1  2  3  4  5  6  7  8  9 
	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数 
	int left = 0;//左下标 
	int right = sz - 1;//右下标
	
	while(left<= right){
		int mid = (left + right)/2;
		if(arr[mid] > k){
			right = mid - 1;
		}
		else if(arr[mid] < k ){
			left = mid + 1;
		} 
		else{
			printf("找到了，下标是：%d\n",mid);
			break;
		}
	}
	if(left>right){
		printf("数组中没有该元素"); 
	}
	 
	return 0;
}
