#include<stdio.h>
double depositamount(double );
double withdrawamt(double);
int main()
{	
	double amount;
	printf("Enter the amount");
	scanf("%lf",&amount);
	int exit;
	do
	{
		int choice;
		printf("Enter your choice 1 or 2");
		scanf("%d",&choice);	
	
		if(choice==1)
		{
	
			amount=depositamount(amount);
			printf("Updated amount is %lf",amount);
		}
		else if (choice==2)
		{
			amount=withdrawamt(amount);
			printf("Updated amount is %lf",amount);
		}
		else
		{

			printf("Invalid choice");
		}
	
		printf("\nDo you want to continue 1 or 0");
		scanf("%d",&exit);
	}while(exit!=0);
}
double depositamount(double amount)
{
	double new_amt,updated_amt;
	printf("Enter the amount you want to insert");
	scanf("%lf",&new_amt);

	updated_amt=amount+new_amt;
	
	return updated_amt;
}

double withdrawamt(double amount)
{
	double req;
	printf("Enter the amount you want to withdraw");
	scanf("%lf",&req);
	if(amount<3000)
	{
		printf("Balance is insufficient");
		return 0;
	}  
	else
	{       
		double updated_amt;
		updated_amt=amount-req;
		
		return updated_amt;
	}
}
