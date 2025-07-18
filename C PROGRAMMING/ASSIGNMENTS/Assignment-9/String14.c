#include<stdio.h>
#include<string.h>

int main()
{
	char str[20]="Hello123";
	char* ptr=strpbrk(str,"123");
	if(ptr)
		printf("First match: %c\n",*ptr);
	else
		printf("No match found");
	return 0;
}