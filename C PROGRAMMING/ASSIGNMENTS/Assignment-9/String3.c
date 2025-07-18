#include<stdio.h>
#include<string.h>

void main()
{
	char str[20]="Helloworld",str1[20];
	strncpy(str1,str,5);
	str1[5]='\0';
	printf("Copied string : %s",str1);
}