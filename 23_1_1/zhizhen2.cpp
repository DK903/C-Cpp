#include <stdio.h>
int main(){
	/* 
	int *p = NULL;
	p是整型指针 - 指向整型的指针 - 可以存放整型的地址
	char *pc = NULL;
	pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
	数组指针 - 指向数组的指针 - 存放数组的地址  
	int arr[10] = {0};
	arr-首元素的地址 
	&arr[0]-首元素的地址
	&arr - 数组的地址 
	*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int (*p)[10] = &arr;//数组的地址要存起来
	// 上面的p 就是数组指针
	int i = 0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(*p+i));	
		//printf("%d ",(*p)[i]);
		
	} 
	//char* arr[5];
	//char* (*pa)[5] = &arr;//数组的指针 
	//pa - 指针变量名
	//*说明pa是指针
	//char* -- pa指向的数组的元素类型是 char* 
	return 0; 
}
