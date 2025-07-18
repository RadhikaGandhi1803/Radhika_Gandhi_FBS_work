#include<stdio.h>
void mystrupr(char*);
void main()
{
	char str[30]="good morning";
	mystrupr(str);
	printf(" Upper string is :%s",str);
}
void mystrupr(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	
}