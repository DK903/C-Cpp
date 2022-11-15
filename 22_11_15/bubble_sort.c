#include <stdio.h>
//设计一个冒泡排序的函数 
//实现将一个整型数组排序 
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);// 10
	//确定冒泡排序的趟数 
	for (i = 0; i < sz - 1; i++)// 0 
	{//每一趟冒泡排序 
		int flag = 1;//假设这一趟要排序的数据已经有序 
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{             // 9 
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据不是有序的 
			}//  flag---妙笔生花 
		}
		if(flag == 1)
		{
			break;
		}
	}
}
int main(){
	int arr[] = {9,8,7,6,5,4,3,2,1,0} ;//对arr进行排升序 
	//printf("%p",&arr);
	//&arr -- 取出的是数组的地址 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr是数组，我们对数组arr进行传参 
	//实际上是数组arr首元素的地址 
	bubble_sort(arr,sz);//冒泡排序函数 
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
