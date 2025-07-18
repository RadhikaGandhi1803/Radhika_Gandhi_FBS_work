#include<stdio.h>
void mergedarray(int*,int*,int*,int,int);
void main()
{
	int arr[20],brr[20],crr[100],n1,n2;
	printf("Enter the number of elements in first array:\n");
	scanf("%d",&n1);
	printf("Enter %d elements for first array\n",n1);
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number of elements in second array:\n");
	scanf("%d",&n2);
	printf("Enter %d elements for second array\n",n2);
	for( int i=0;i<n2;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("Merged array:");
	mergedarray(arr,brr,crr,n1,n2);
	
}
void mergedarray(int* arr,int* brr,int* crr,int n1,int n2)	
{
	int i,j;
	for( i=0;i<n1;i++)
	{
		crr[i]=arr[i];
	}
	
	for(j=0;j<n2;j++)
	{
		crr[i+j]=brr[j];
	
	}

	for(int i=0;i<n1+n2;i++)
	{
		printf("%d ",crr[i]);
	}
}