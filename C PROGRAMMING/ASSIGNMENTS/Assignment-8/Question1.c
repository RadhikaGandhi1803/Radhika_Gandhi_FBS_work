#include<stdio.h>
int minis(int*,int);
int maxis(int*,int);
int main()
{
	int arr[5];
	int n;
	printf("How many elements you want to enter:");
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
	printf("\n");
	int res1=minis(arr,n);
	printf("Minimum elemnet is %d ",res1);
	
	int res2=maxis(arr,n);
	printf("\nMaximum elemnet is %d ",res2);

}

int minis(int* arr,int n)
{ 
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int maxis(int* arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
	
	