#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="123Hello";
	int len=strspn(str,"1234567890");
	printf("Prefix length of digits : %d\n",len);
	return 0;
}