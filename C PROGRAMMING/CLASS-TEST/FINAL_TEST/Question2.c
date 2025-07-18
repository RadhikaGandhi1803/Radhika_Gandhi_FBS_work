#include<stdio.h>
void main()
{
	int num,count;
	printf("enter the number:\n");
	scanf("%d",&num);	
	printf("enter the count:\n");
	scanf("%d",&count);

	for(int i=1;i<=count;i++)
	{
		printf("+");
		for(int j=1;j<=i;j++)
		{
			printf("%d",num);
		}
	}
}

