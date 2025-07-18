#include<stdio.h>
#include<string.h>
void mystrrev(char*);
void main()
{
	char str[30]="good morning";
	mystrrev(str);
	printf(" reverse string is :%s",str);
}
void mystrrev(char* ptr)
{
	int left=0;
	int right=strlen(ptr)-1;
	int temp;
	
	while(left<right)
	{
		temp=ptr[left];
		ptr[left]=ptr[right];
		ptr[right]=temp;
		
		left++;
		right--;
	}
	return ptr;
	
}