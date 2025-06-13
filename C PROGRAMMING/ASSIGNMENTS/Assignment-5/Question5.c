#include<stdio.h>
void main()
{

	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<6-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}