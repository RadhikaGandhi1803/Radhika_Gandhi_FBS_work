#include<stdio.h>
void main()
{
	for(int j=1;j<=1000;j++)
	{
		int num=j,sum=0,i=1,flag=0;
		while(i<=num/2)
		{
			if(num%i==0)
			{
				sum+=i;
			}
			i++;
		}
		if(sum==num)
		{
			printf("%d\n",sum);
		}
		
	}
}