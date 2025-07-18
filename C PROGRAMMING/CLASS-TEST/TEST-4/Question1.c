#include<stdio.h>
void main()
{
	int start,end;
	
	printf("Enter starting value and ending value");
	scanf("%d%d",&start,&end);

	for(int i=start;i<=end;i++)
	{	
		for(int j=1;j<=end;j++)
		{
			if(i%j==0)
			printf("%d = %d\n",i,j);		 
		}
	}
}