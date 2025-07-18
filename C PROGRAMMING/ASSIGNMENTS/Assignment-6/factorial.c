
//TYPE-3
#include<stdio.h>
void fact(int*);
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	fact(&n);
}
void fact(int* n)
{
	int i=1,factorial=1;

	while(i<=*n)
	{
		factorial *=i;
		i++;
	}
	printf("%d",factorial);	
}
