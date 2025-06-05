#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int temp;
	printf("Before swapping a=%d and b=%d\n\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping a=%d and b=%d",a,b);
}