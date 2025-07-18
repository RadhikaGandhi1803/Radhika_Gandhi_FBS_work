#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="Hello";
	char str1[20]="Hello!!";
	int result=strncmp(str,str1,5);
	printf("Compare Result: %d",result);
}