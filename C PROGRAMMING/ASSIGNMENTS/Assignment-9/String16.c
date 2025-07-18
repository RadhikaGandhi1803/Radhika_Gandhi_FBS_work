#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="Hello123";
	int len=strcspn(str,"123");
	printf("length before digits : %d",len);
	return 0;
}