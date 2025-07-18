#include<stdio.h>
void swap(int*,int,int,int);
void display(int*,int);
void main()
{
	int arr[100];
	int p1,p2,temp;
	
	printf("Enter the size of array: ");
	int n;
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter position 1 and position 2");
	scanf("%d%d",&p1,&p2);
	
	if(p1>=0 && p1<n && p2>=0 && p2<n)
	{
		temp=arr[p1];
		arr[p1]=arr[p2];
		arr[p2]=temp;
		
		printf("After swapping :\n");
		
		display(arr,n);
	}
	else
	{
		printf("Invalid position !");
	}
}


void display(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}