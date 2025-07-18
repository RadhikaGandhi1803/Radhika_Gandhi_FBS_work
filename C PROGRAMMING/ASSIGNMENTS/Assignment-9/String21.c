#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="123456";
	memmove(str+2,str,4);
	printf("After move : %s",str);
	return 0;
}