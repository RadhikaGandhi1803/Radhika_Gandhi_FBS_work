#include<stdio.h>
int palindrome(int* ,int );
void main()
{
	int arr[50],n;
	printf("How many elements you want to enter?\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	if(palindrome(arr,n)==1)
	{
		printf("Array is palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}

}

int palindrome(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(arr[i]==arr[j])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	
}