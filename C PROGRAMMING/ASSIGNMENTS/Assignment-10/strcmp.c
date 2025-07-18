#include<stdio.h>
int mystrcmp(char*,char*);
int main()
{
	char str[10]="firstbit";
	char str1[10]="firstbit";
	
	int res=mystrcmp(str,str1);
	if(res==0)
	{
		printf("strings are same");
	}
	else
	{
		printf("strings are not same");	
	}
	return 0;
	
}
int mystrcmp(char* str,char* str1)
{
	int i=0; 
	while(str[i]!='\0' && str1[i]!='\0')
	{
		if(str[i]!=str1[i])
			return 1;
		i++;
	}
	if(str[i]!='\0' && str1[i]!='\0')
		return 0;
	else
		return 1;
}