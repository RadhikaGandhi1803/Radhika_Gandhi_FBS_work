#include<stdio.h>
#include<stdlib.h>
void main()
{
	char str[100]="I love Java Programming";
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		count++;
		i++;
	}
	printf("%d\n",count);
	printf("Number of words = %d",count+1);
	
}

