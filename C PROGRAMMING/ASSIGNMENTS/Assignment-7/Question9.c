#include<stdio.h>
void main()
{
	int arr[100],n;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	
	printf("Enter the %d elements\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Reversed array is:");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}