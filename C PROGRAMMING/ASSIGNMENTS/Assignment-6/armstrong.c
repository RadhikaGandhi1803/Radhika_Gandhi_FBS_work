#include<stdio.h>
#include<math.h>
void armstrong(int*);
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	armstrong(&no);
}
void armstrong(int* no)
{
	int rem,armstrong=0,n=0,original_no;
	original_no=*no;
	while(original_no!=0)
	{
		original_no/=10;
		n++;
	}
	original_no=*no;
	
	while(original_no!=0)
	{
		rem=original_no%10;
		armstrong += pow(rem,n);
		original_no=original_no/10;
	
	}	
	if(armstrong==*no)
	{
		printf("The number is armstrong number");
	}
	else
	{
		printf("The number is not armstrong number");

	}
}

