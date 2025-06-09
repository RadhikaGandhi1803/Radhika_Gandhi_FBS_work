#include<stdio.h>
void main()
{
	int num,no;
	int rev=0,rem;
	printf("Enter the number");
	scanf("%d",&num);
	no=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("The reverse is: %d\n",rev);
	printf("The number is: %d\n",no);
	if(rev==no)
	{
		printf("%d is palindrome",no);
	}
	else
	{
		printf("not a palindrome");
	}
}