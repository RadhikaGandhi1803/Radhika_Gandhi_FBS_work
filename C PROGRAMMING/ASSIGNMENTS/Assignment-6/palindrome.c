

//TYPE-3
#include<stdio.h>
void palindrome(int*);
void main()
{	int num;
	printf("Enter the number");
	scanf("%d",&num);
	palindrome(&num);
}
void palindrome(int* num)
{
	int no;
	int rev=0,rem;

	no=*num;
	while(*num!=0)
	{
		rem=*num%10;
		rev=rev*10+rem;
		*num=*num/10;
		
	}
	printf("The reverse is: %d\n",rev);

	if(rev==no)
	{
		printf("%d is palindrome",no);
	}
	else
	{
		printf("not a palindrome");
	}
}
