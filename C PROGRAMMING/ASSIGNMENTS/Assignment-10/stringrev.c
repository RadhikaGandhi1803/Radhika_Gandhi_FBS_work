#include<stdio.h>
#include<string.h>
char* stringrev(char*);
void main()
{
	char str[9]="firstbit";
	char* res=stringrev(str);
	printf("%s",res);
	
}
char* stringrev(char* ptr)
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