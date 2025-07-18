#include<stdio.h>
int main()
{
	int arr[10],sum=0;

	printf("Enter the elements in array:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in array are:");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
		sum=sum+arr[i];
	}
	printf("\nSum is :%d",sum);
}
	
	