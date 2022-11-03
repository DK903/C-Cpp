#include <stdio.h>
int main(){
	int ch = 0;
	//CTRL + Z ¿ÉÒÔÍ£Ö¹
	//E O F -> end of file = -1 
	while((ch=getchar()) != EOF){
		putchar(ch);
	}
	
	return 0;
}
