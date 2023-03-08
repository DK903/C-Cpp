#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
        ElemType  data;
        struct LNode *next;
}LinkNode;
void CreatListR(LinkNode *&L,ElemType a[],int n)
{   LinkNode *s ,*r;
	L = (LinkNode *)malloc(sizeof(LinkNode));
    r = L;
    for (int i = 0;i < n;i++){
        s=(LinkNode *)malloc(sizeof(LinkNode));
        s->data = a[i];
        r->next = s;  // 把s插在结点r后
        r = s;
	}
    r->next = NULL;  //将尾结点的next域置为NULL
}
int main(){
	
	return 0;
} 
