#include <stdio.h>
//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char * str)
//{
//	int count = 0;
//	while(*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归解决    《简单》 
int my_strlen(char* str){
	if(*str !='\0')
		return 1+my_strlen(str+1);
	else
		return 0; 
} 
int main(){
	char arr[] = "bitno1";
	int len = my_strlen(arr);
	//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d",len); 
	return 0;
} 
