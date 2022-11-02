#include <stdio.h>
#include <string.h> 
struct Book{//创建一个结构体类型 
	char name[20];
	short price;
};
int main(){
	struct Book b = {//利用结构体类型-创建一个该类型的结构体变量 
		"c语言程序设计",55
	};
	struct Book* zz = &b;//结构体指针类型：struct Book* 
	printf("书名：%s\n",b.name); 
	printf("价格：%d$\n",b.price);//结构体变量.成员 
	strcpy(b.name,"C++"); //b.name本质是数组  需调用strcpy()函数 
	printf("%s\n",b.name);//可变其值  且 须在头文件中引用string.h 
	b.price = 15;//price 为变量可直接赋值 
	printf("%d\n",b.price);
	printf("利用指针打印书名和价格");
	printf("书名：%s\n",(*zz).name); 
	printf("价格：%d\n",(*zz).price);//.的优先级比*高 所以要扩起来 
	//->  结构体指针 -> 成员 
	printf("%s\n",zz->name);
	
	return 0;
} 
