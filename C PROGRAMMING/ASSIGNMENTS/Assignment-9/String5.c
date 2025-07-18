#include<stdio.h>
#include<string.h>

void main()
{
	char str[20]="Hello",str1[20]="World!!";
	strncat(str,str1,5);
	printf("Result: %s",str);
}