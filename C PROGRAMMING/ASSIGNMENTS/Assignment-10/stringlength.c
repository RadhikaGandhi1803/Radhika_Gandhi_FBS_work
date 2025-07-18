#include<stdio.h>
int stringlen(char*);
void main()
{
	
	char str[10]="Firstbit";
	int res=stringlen(str);
	printf("%d",res);

}

int stringlen(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
	
}