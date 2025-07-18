#include<stdio.h>
void main()
{
	int arr[50],n,flag=0;
	printf("Enter the number of element you want to enter");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element you want to search\n");
	int element;
	scanf("%d",&element);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			flag=1;
			break;
		}	
	}
	if(flag)
		printf("Element found");
	else
		printf("not found");
		
}