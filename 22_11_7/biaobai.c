#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h> 

int main(){
	char arr1[] = "Your love gives me the feeling that the best is still ahead!";
	char arr2[] = "############################################################";
	int left = 0;
	int right = strlen(arr1) - 1;
	
	while(left<=right){
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		//printf("%s\n",arr2);
		Sleep(500);//ÐÝÏ¢Ò»Ãë 
		system("cls");// cmdÃüÁî  cls -- ÇåÆÁ 
		printf("%s\n",arr2);
		left++;
		right--;
	}
	return 0;
}
