#include<stdio.h>
void storearray(int*,int );
void main()
{
	int arr[50],brr[50];
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of 1st array");
	storearray(arr,n);
	
	printf("Enter the elements of 2nd array");
	storearray(brr,n);


	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
		
				if(arr[i]==brr[j])
				{
					printf("Commom elements are-%d",arr[i]);
				}
			}	
		}
	
}

void storearray(int* ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
}