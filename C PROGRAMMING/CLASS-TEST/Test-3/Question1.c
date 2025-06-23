#include<stdio.h>
void main()
{
	int start=1,end=25;
	printf("Even numbers are-");
	for(int i=start;i<end;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nOdd numbers are-");
	for(int i=start;i<end;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}
