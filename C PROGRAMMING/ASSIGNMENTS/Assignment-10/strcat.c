#include<stdio.h>
void mystrcat(char*,char*);
int main()
{
	char str[20]="hii ";
	char str1[20]="good morning";
	mystrcat(str,str1);
	printf(" merged string :%s",str);
	return 0;
}
void mystrcat(char* str,char* str1)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		i++;
	}
	while(str1[j]!='\0')
	{
		str[i]=str1[j];
		i++;
		j++;
	}
	str[i]='\0';

	
}