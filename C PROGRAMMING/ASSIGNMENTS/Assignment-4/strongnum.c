#include<stdio.h>
void main()
{
	for(int j=1;j<=1000;j++)
	{
	int num=j,temp=num;
	int rem,i,factorial,sum=0;

	while(temp>0)
	{
		rem=temp%10;
		factorial=1;
		i=1;
		while(i<=rem)
		{
			factorial*=i;
			i++;
		}
	sum+=factorial;
	temp=temp/10;
	}
	if(sum==num)
	{
		printf("%d\n",num);
	}

	}
}
