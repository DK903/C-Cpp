#include <stdio.h>
struct Stu{
//创建了一个结构体类型 - Struct Stu 
	char name[5];
	int age;
	char id[20] ;
};
int main(){
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化 
	struct Stu s1 = {"张三",
						20, 
					"2252120583"
	};
	struct Stu * p = &s1; 
	//结构体指针 -> 成员名 
 	printf("%s\n",p->name);
	
	//打印出来    结构体变量.成员名 
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);
	return 0; 
} 
