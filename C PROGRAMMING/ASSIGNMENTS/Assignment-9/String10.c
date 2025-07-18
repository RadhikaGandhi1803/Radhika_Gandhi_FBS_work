#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="HelloWorld";
	char *ptr= strrchr(str,'w');
	
	printf("Last 'w' found at: %s\n",ptr);
	return 0;
}