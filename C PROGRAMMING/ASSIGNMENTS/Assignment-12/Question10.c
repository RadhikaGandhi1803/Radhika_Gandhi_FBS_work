#include<stdio.h>
#include<stdlib.h>
void sort(int*,int);
void main()
{
	int n;
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter the number of element you want to enter");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sorted array in ascending order:\n");
	sort(arr,n);
}

void sort(int* arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}