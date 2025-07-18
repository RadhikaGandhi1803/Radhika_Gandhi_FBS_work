#include<stdio.h>
#include<stdlib.h>
void reverse(int*,int);
void main()
{
	int n;
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	
	printf("Enter the %d elements\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Reversed array is:");
	reverse(arr,n);
}
void reverse(int* arr,int n)
{
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}