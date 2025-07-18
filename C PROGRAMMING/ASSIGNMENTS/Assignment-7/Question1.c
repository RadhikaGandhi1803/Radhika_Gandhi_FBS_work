#include<stdio.h>
int main()
{
	int arr[5],min,max;
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
	
	printf("\n");
	
	 max=min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("\nmax is :%d",max);
	printf("\nmin is :%d",min);
	return 0;
}