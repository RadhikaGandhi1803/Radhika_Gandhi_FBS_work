#include<stdio.h>
int sumofarray(int* ,int);
int main()
{
	int arr[100],n;
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
	int res=sumofarray(arr,n);
	printf("\nSum is :%d",res);
}
int sumofarray(int* arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;	
}
	
	