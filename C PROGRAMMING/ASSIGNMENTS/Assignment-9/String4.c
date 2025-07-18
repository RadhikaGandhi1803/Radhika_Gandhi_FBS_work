#include<stdio.h>
#include<string.h>

void main()
{
	char str[20]="Hello",str1[20]="World!";
	strcat(str,str1);
	printf("Concatenated string : %s",str);
}