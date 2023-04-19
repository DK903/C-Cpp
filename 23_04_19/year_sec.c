#include <stdio.h>
#define YEAR 3.156000e+007
int main(void){
	float age = 0.0;
	double sec = 0.0;
	printf("Type your age please:");
	scanf("%f",&age);
	sec = age * YEAR;
	printf("You have %le seconds\n",sec); 
	return 0;
}
