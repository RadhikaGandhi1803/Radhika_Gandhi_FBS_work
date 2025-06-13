#include<stdio.h>
void main()
{
	int choice;
	printf("Enter your choice from 1 to 6");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		int no1;
		printf("Enter the  to check evn or odd:");
		scanf("%d",&no1);
		
		no1%2==0?printf("Even number"):printf("odd number");
	}
	else if(choice==2)
	{
		int no2,isprime=0;
		printf("enter the number to check prime or not:");
		scanf("%d",&no2);
		for(int i=2;i<=no2/2;i++)
		{
			if(no2%i==0)
			{
				isprime=1;
			}
		}
		isprime==0?printf("Num is prime"):printf("not prime");
	}
		
	else if(choice==3)
	{
		int no3,temp,rev=0,rem;
		printf("Enter the number to check palindrome or not:");
		scanf("%d",&no3);
		temp=no3;
		while(no3!=0)
		{
			rem=no3%10;
			rev=rev*10+rem;
			no3=no3/10;
		}
		printf("%d\n",rev);
		rev==temp?printf("number is palindrome"):printf("not palindrome");
	}
		
	else if(choice==4)
	{
		int no4;
		printf("Enter the number to check positive,negative or zero:");
		scanf("%d",&no4);
		no4==0?printf("number is zero"):no4>0?printf("number is positive"):printf("number is negative");
	}
		
	else if(choice==5)
	{
		int no5,rev=0,rem;
		printf("Enter the number to print reverse:");
		scanf("%d",&no5);
		
		while(no5!=0)
		{
			rem=no5%10;
			rev=rev*10+rem;
			no5=no5/10;
		}
		printf("%d",rev);
	}
		
	else if(choice==6)
	{
		int no6,sum=0,rem;
		printf("Enter the number to print sum of digits");
		scanf("%d",&no6);
		
		while(no6!=0)
		{
			rem=no6%10;
			sum=sum+rem;
			no6=no6/10;
		}
			printf("%d",sum);
	}
	
	else
	{
		printf("invalid input");
	}

}
			
	
