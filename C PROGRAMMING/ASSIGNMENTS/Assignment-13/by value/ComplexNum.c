#include<stdio.h>
typedef struct Complex
{
	int real;
	int img;
	
}Complex;

Complex store();
void display(Complex);
void main()
{
	Complex C1;
	C1=store();
	display(C1);
	
}
Complex store()
{	
	Complex c;
	printf("Enter real and imaginary");
	scanf("%d",&c.img);
	scanf("%d",&c.real);
	return c;
}

void display(Complex c)
{
	printf("\n");
	printf("complex number=%d+%di\n",c.img,c.real);
}