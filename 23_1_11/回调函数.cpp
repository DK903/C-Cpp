#include <stdio.h>
void print(char *str)
{
	printf("heheh: %s",str);
}
void test(void (*p)(char*)){
	printf("test\n");
	p("bit");
}
int main(){
	test(print);
	return 0;
} 
