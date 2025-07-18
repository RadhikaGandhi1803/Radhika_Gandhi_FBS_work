#include<stdio.h>
#include<stdlib.h>
void sum(int*,int*,int*,int);
void main()
{
	int n;
	int* arr=(int*)malloc(n*sizeof(int));
	int* brr=(int*)malloc(n*sizeof(int));
	int* crr=(int*)malloc(n*sizeof(int));
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements for first array\n",n);
	for( int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter %d elements for second array\n",n);
	for( int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("Sum of two array is:");
	sum(arr,brr,crr,n);	
}
void sum(int* arr,int* brr,int* crr,int n)
{	
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("Sum of two array is:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",crr[i]);
	}
	
}