#include<stdio.h>

void main()
 {
	for(int j=1;j<=500;j++)
	{

	int no=j,rem,sum=0;
	int temp=no,count=0;
	
	while(no>0)
	{
		no=no/10;
		count++;
	}
	
	no=temp;
	while(no>0)
	{
		rem=no%10;
		int result=1;
		for(int i=1;i<=count;i++)
		{
			result=result*rem;
		}
		sum=sum+result;
		no=no/10;
	}
	if(sum==temp)
		printf("%d\n",temp);
	}	
}
	