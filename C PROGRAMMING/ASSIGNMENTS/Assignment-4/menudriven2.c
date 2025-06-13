#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	int choice;
	printf("Enter your choice from 1 to 6:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("checking %d is even or odd\n",no);
		no%2==0?printf("Even number"):printf("odd number");
	}
	else if(choice==2)
	{
		int isprime=0;
			printf("checking %d is prime or not\n",no);
		for(int i=2;i<=no/2;i++)
		{
			if(no%i==0)
			{
				isprime=1;
			}
		}
		isprime==0?printf("Num is prime"):printf("not prime");
	}
		
	else if(choice==3)
	{
		int temp,rev=0,rem;
			printf("checking %d is palindrome or not\n",no);
		temp=no;
		while(no!=0)
		{
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		printf("%d\n",rev);
		rev==temp?printf("number is palindrome"):printf("not palindrome");
	}
		
	else if(choice==4)
	{
		printf("checking %d is postive,negative or zero\n",no);
		no==0?printf("number is zero"):no>0?printf("number is positive"):printf("number is negative");
	}
		
	else if(choice==5)
	{
		int rev=0,rem;
		printf("printing reverse of %d- \n",no);
		while(no!=0)
		{
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		printf("%d",rev);
	}
		
	else if(choice==6)
	{
		int sum=0,rem;
		printf("printing sum of %d- \n",no);
		while(no!=0)
		{
			rem=no%10;
			sum=sum+rem;
			no=no/10;
		}
			printf("%d",sum);
	}
	
	else
	{
		printf("invalid input");
	}

}
			
	
