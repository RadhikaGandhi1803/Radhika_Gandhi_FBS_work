#include<stdio.h>
int evenno(int*,int);
int oddno(int*,int);
int main()
{
	int arr[5],i,even,odd,n;
	printf("Enter the number of element you want to enter");
	scanf("%d",&n);
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
	evenno(arr,n);
	
	printf("\nOdd numbers are -");
	oddno(arr,n);

}

int evenno(int* arr,int n)
{
	int even;
	for( int i=0;i<n;i++)
	{
		if(arr[i]%2==0){
			even=arr[i];
			printf("%d ",even);
		}
	}
}

int oddno(int* arr,int n)
{
	int odd;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0){
			odd=arr[i];
			printf("%d ",odd);
		}
	}
	
}