#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_COLLATE,"");
	char *a="abc";
	char *b="xyz";
	
	printf("Result : %d\n",strcoll(a,b));
	return 0;
}