#include<stdio.h>
void storearray(int*,int );
void max(int* ,int,int*,int* );
void main()
{
	int arr[50];
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of 1st array");
	storearray(arr,n);
	
	int m1,m2;
	max(arr,n,&m1,&m2);
	printf("Maximum number are -%d & %d",m1,m2);
	
}
void storearray(int* ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void max(int* arr,int n,int* m1,int*m2)
{
	
	if(arr[0]>arr[1])
	{
		*m1=arr[0];
		*m2=arr[1];
	}
	else
	{
		*m1=arr[1];
		*m2=arr[0];
	}
	
	for(int i=2;i<n;i++)
	{
		if(arr[i]>*m1)
		{
			*m2=*m1;
			*m1=arr[i];
		}
		else if(arr[i]>*m2 && arr[i]!=*m1)
		{
			*m2=arr[i];
		}
	}
}