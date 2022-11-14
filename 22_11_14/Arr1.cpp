#include <stdio.h>
#include <string.h>
int main (){
	//创建一个数组 - 存放整型 - 10个 
	int arr[10] = {1,2,3 };//不完全初始化,剩下的元素默认初始化为 0 
	char arr2[5] = {'a','b',98};//ASCII 码值 
	char arr3[5] = "ab";//本质上存了3个元素 还有一个\0 
	char arr4[] = "abcdef";
	printf("sizeof : %d\n",sizeof(arr4));
	//计算 arr4所占空间的大小 --操作符 
	printf("strlen : %d\n",strlen(arr4));
	//求字符串的长度  --- '\0' 之前的字符个数--库函数--引用头文件 
	return 0;
}  
