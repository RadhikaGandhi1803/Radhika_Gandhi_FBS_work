#include<stdio.h>
void main()
{
	int arr[20],brr[20],crr[100],n;
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
	
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("Sum of two array is:");
	for(int i=0;i<n;i++)
	{
		printf("%d",crr[i]);
	}
	
}