#include<stdio.h>
#include<string.h>

void main()
{
	char str[20]="Hello",str1[20];
	strcpy(str1,str);
	printf("Copied string : %s",str1);
}