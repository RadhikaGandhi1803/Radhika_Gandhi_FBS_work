#include<stdio.h>
void mystrncpy(char*,char*,int);
int main()
{
	char str1[20]="good morning";
	char str[20];
	mystrncpy(str,str1,5);
	printf(" copied string :%s",str);
	return 0;
}
void mystrncpy(char* str,char* str1,int n)
{
	int i ;
	for(i=0;i<n && str1[i]!='\0';i++)
	{
		str[i]=str1[i];
	}
	
	for(;i<n;i++)
	{
		str[i]='\0';
	}

	
}