#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="Hello";
	memset(str,'*',3);
	printf("Result : %s",str);
	return 0;
}