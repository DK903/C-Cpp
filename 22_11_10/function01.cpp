#include <stdio.h>
#include <string.h>
int main(){
	//strcpy  -- 字符串拷贝 
	//char * strcpy ( char * destination, const char * source );
	// 源头比目的地长  字符串会溢出 
	//strcmp  -- 字符串比较 
	//int strcmp ( const char * str1, const char * str2 );
	char arr1[] = "coolcool";
	char arr2[] = "###########";
	strcpy(arr2,arr1);//把 arr1中的字符放到 arr2中
	// arr1 < arr2 
	//覆盖  be copied
	printf("%s\n",arr2); 
	return 0;
}
