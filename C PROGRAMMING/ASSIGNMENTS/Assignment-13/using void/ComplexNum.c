#include<stdio.h>
typedef struct Complex
{
	int real;
	int img;
	
}Complex;


void main()
{
	
	Complex c;
	printf("Enter real and imaginary");
	scanf("%d",&c.img);
	scanf("%d",&c.real);
	
	printf("\n");
	printf("complex number=%d+%di\n",c.img,c.real);
}