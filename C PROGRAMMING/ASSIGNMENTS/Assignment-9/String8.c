#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="HelloWorld";
	char *ptr= strchr(str,'l');
	
	printf("First 'l' found at: %s\n",ptr);
	return 0;
}