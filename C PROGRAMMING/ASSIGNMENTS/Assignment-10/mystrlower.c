#include<stdio.h>
void mystrupr(char*);
void main()
{
	char str[30]="GOOD MORNING";
	mystrupr(str);
	printf("Lower string is :%s",str);
}
void mystrupr(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	
}