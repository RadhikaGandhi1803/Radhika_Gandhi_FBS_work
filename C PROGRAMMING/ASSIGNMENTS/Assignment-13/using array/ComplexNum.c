#include<stdio.h>
typedef struct Complex
{
	int real;
	int img;
	
}Complex;

void storeComplex(Complex*,int);
void displayComplex(Complex*,int);
void main()
{
	Complex C1[100];
	int size;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&size);
	printf("**Details of student**\n");
	storeComplex(C1,size);
	printf("**Details of student are**");
	displayComplex(C1,size);
	
}
void storeComplex(Complex* c,int size)
{	for(int i=0;i<size;i++)
	{
	
	printf("Enter real and imaginary");
	scanf("%d",&c[i].img);
	scanf("%d",&c[i].real);
	}
}

void displayComplex(Complex* c,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("\n");
	printf("complex number=%d+%di\n",c[i].img,c[i].real);
	}
}