#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *original="Hello";
	char *copy=strdup(original);
	
	printf("Copy: %s\n",copy);
	free(copy);//complusory
	return 0;
}