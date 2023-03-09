#include <stdio.h> 
#include <string.h>
int main(){
	char *p = "abcdef";
	printf("%d\n",sizeof(p)); // 4/8 - 计算指针变量 p的大小  
	printf("%d\n",sizeof(p+1)); //4/8 - p+1 得到的是字符 b的地址 
	printf("%d\n",sizeof(*p)); // 1  *p 就是字符串的第一个字符 'a' 
	printf("%d\n",sizeof(p[0])); //1 int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	printf("%d\n",sizeof(&p)); // 4/8 -地址 
	printf("%d\n",sizeof(&p +1)); // 4/8 -地址 
	printf("%d\n",sizeof(&p[0] + 1)); // 4/8 -地址
	printf("----------------------\n"); 
	printf("%d\n",strlen(p)); // 6  p存的就是字符串 
	printf("%d\n",strlen(p + 1)); // 5 从 b开始 
	//printf("%d\n",strlen(*p)); // err 
	//printf("%d\n",strlen(p[0])); // err
	//printf("%d\n",strlen(&p));// 指针p的地址 --随机值 
	//printf("%d\n",strlen(&p+1));// 随机值 
	printf("%d\n",strlen(&p[0]+1)); // 5  从 b开始数 
	printf("-----二维数组----------\n");
	int a[3][4] = {0};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0][0]));
	printf("%d\n",sizeof(a[0]+1));
	printf("%d\n",sizeof(*(a[0]+ 1));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(*(a+1)));
	printf("%d\n",sizeof(&a[0]+1));
	printf("%d\n",sizeof(*(&a[0]+1)));
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(a[3]));
	return 0;
}
