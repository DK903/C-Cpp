#include <stdio.h>
typedef struct{
	float realpart;
	float imagpart;	
}Complex;
void assign(Complex *A,float real,float imag);//赋值 
void add(Complex *A,float real,float imag);   //A + B
void minus(Complex *A,float real,float imag);//A - B
void mul(Complex *A,float real,float imag); //A * B
void div(Complex *A,float real,float imag);//A / B

void assign(Complex *A,float real,float imag){
	A->realpart = real; // 实部赋值 
	A->imagpart = imag; // 虚部赋值 
}
void add(Complex *c,Complex A,Complex B){ // c = A+B
	c->realpart=A.realpart+B.realpart;
	c->imagpart=A.imagpart+B.imagpart;
} 
void mul(Complex *c,Complex A,Complex B){ // c = A*B
	c->realpart=A.realpart*B.realpart;
	c->imagpart=A.imagpart*B.imagpart;
}
void div(Complex *c,Complex A,Complex B){ // c = A/B
	c->realpart=A.realpart/B.realpart;
	c->imagpart=A.imagpart/B.imagpart;
}
int main(){
	Complex z1,z2,z3,z4,z;
	float Realpart,ImagPart;
	assign(&z1,8.0,6.0);
	assign(&z2,4.0,3.0);
	add(&z3,z1,z2);
	mul(&z4,z2,z3);
	div(&z,z3,z4);
	printf("%f+",z.realpart);
	printf("%fi\n",z.imagpart);
	return 0;
} 
