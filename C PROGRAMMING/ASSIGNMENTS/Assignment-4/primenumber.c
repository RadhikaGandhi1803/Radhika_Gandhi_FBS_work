#include<stdio.h>
void main()
{
	for(int j=2;j<=100;j++)
	{
		int num=j,isprime=0,i=2;
		while(i<=num/2)
		{
			if(num%i==0)
			{	
				isprime=1;
			}
			i++;
		}
		if(isprime==0)
		{
			printf("%d\n",j);
		}
	}
}