#include <stdio.h>
typedef struct{
	char num[8];
	char name[8];
	int score;//Êý¾ÝÓò 
}ElemType;
typedef struct Lnode{
	ElemType data;
	struct Lnode *next;
}Lnode,*LinkList;
int main(){
	return 0;
} 
