#include<stdio.h>
void main()
{
	int arr[50],n;
	printf("Enter the number of element you want to enter");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
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
	printf("Sorted array in ascending order:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}