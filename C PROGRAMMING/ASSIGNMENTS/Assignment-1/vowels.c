#include<stdio.h>
void main()
{
	char a='b';
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("%c is vowel",a);
	}
	else
	{
		printf("%c is consonent",a);
	}
}