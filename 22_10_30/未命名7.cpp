#include <stdio.h>
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	//定义数组 
	printf("%d\n",arr[2]);//用下标的方式访问元素 
	//遍历数组 c#可以foreach 
	int i = 0;
	while (i<10){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
