#include<stdio.h>
int primenum(int*,int);
void main()
{
	int arr[100],n,i;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter the %d elements\n",n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Prime numbers are:\n");
	primenum(arr,n);	
}
int primenum(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
	int num=arr[i],isprime=1;

	if(num<=1)
	{
		isprime=0;
	}
	else
	{
		for(int j=2;j*j<=num;j++)
		{
			if(num%j==0)
			{
				isprime=0;
				break;
			}
		}
	}
	if( isprime)
	 {
		printf("%d\n",num);
	} 
	}
}
