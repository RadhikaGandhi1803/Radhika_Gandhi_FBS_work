//#include<stdio.h>
//#include<string.h>
//
//void main()
//{
//	char str[20]="Hello",str1[20]="World!!";
//	int result=strcmp(str,str1);
//	printf("Compare Result: %d",result);
//}

#include<stdio.h>
#include<string.h>

void main()
{
	char str[20]="Hello",str1[20]="Hello";
	int result=strcmp(str,str1);
	printf("Compare Result: %d",result);
}