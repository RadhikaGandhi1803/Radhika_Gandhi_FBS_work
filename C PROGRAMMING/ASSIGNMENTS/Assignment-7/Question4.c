#include<stdio.h>
int main()
{
	int arr[5],i,even,odd;
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the elements in array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in array are:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nEven numbers are -");
	

	for( i=0;i<n;i++)
	{
		if(arr[i]%2==0){
			even=arr[i];
			printf("%d ",even);
		}
	}
	printf("\nOdd numbers are-");
	for( i=0;i<n;i++)
	{
		if(arr[i]%2!=0){
			odd=arr[i];
			printf("%d ",odd);
		}
	}
	
}