#include<stdio.h>
typedef struct Complex
{
	int real;
	int img;
	
}Complex;

void storeComplex(Complex*);
void displayComplex(Complex);
void main()
{
	Complex C1;
	printf("**Details of student**\n");
	storeComplex(&C1);
	printf("**Details of student are**");
	displayComplex(C1);
	
}
void storeComplex(Complex* c)
{	
	printf("Enter real and imaginary");
	scanf("%d",&c->img);
	scanf("%d",&c->real);
}

void displayComplex(Complex c)
{
	printf("\n");
	printf("complex number=%d+%di\n",c.img,c.real);
}