#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="HelloWorld",str1[20];
	memcpy(str1,str,strlen(str)+1);
	printf("Result : %s",str1);
	return 0;
}