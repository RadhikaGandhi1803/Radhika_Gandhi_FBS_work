#include<stdio.h>
void main()
{
	double price,total_price;
	char ch;
	double discount=0;
	
	printf("Enter the price of product\n");
	scanf("%lf",&price);
	printf("If student then enter Y or N :\n ");
	scanf(" %c",&ch);
	
	if(ch=='y' || ch=='Y')
	{
		if(price>=500)
		{
			discount=price*0.20;
			total_price=price-discount;
		}
		else
		{
			discount=price*0.10;
			total_price=price-discount;
		}
	}
	else
	{
		if(price>=600)
		{
			discount=price*0.10;
			total_price=price-discount;
		}
		else
		{
			total_price=price;
		}
	}
	printf("Total price is %lf",total_price);
}