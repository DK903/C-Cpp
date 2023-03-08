#include <stdio.h>
#include <string.h>
int main(){
	char arr[] = "abcdef";//  a b c d e f \0
	printf("%d\n",sizeof(arr));//sizeof(arr)计算的数组的大小 单位是字节 7
	printf("%d\n",sizeof(arr + 0)); // 计算的是地址的大小  4/8 
						//计算的是首元素的地址  arr+0 
	printf("%d\n",sizeof(*arr)); // 解引用操作--首元素的大小--1
	printf("%d\n",sizeof(arr[1]));  //  1
	printf("%d\n",sizeof(&arr));// 数组地址大小  4/8
	printf("%d\n",sizeof(&arr+1));//本质还是地址  大小为4/8个字节 
					//&arr+1是跳过整个数组后的地址 
	printf("%d\n",sizeof(&arr[0]+1));//4/8
	printf("------------------------\n");
	printf("%d\n",strlen(arr));//  数组内容为a b c d e f 共计 6个
	printf("%d\n",strlen(arr+0)); // 6
	//printf("%d\n",strlen(*arr)); err 非法访问内存
	//printf("%d\n",strlen(arr[1])); 同上 
	//printf("%d\n",strlen(&arr));6 &arr数组的地址应该由char* p[7]=&arr;存放 
	//printf("%d\n",strlen(&arr+1));随机值 
	printf("%d\n",strlen(&arr[0]+1)); //5
	return 0;
}
