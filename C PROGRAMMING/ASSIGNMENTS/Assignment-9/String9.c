#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="I love programming language";
	char *ptr= strstr(str,"love");
	
	printf("Substring found at: %s\n",ptr);
	return 0;
}