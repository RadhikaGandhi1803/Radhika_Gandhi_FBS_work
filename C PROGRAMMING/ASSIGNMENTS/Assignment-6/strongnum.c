#include<stdio.h>
void main()
{
	int num,onum;
	int digit,i,factorial,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	
	onum=num;
	while(onum>0)
	{
		digit=onum%10;
		factorial=1;
		i=1;
		while(i<=digit)
		{

		factorial*=i;
		i++;
	
	}
	sum+=factorial;
	onum/=10;
}
	if(sum==num)
	{
		printf("strong num");
	}
	else
	{
		printf("Not");
	}
}