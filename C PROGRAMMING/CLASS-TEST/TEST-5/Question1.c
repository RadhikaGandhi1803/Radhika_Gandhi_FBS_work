#include<stdio.h>
float calsellingprice(float* ,float*);

void main()
{
	float cost_price;
	float dis;
	printf("Enter the cost price of book");
	scanf("%f",&cost_price);
	
	if(cost_price >0 && cost_price<=1000)
	{
		dis=0.10;
	}
	else if(cost_price>=1000 && cost_price<=5000)
	{
		dis=0.15;
	}
	else if(cost_price<=10000)
	{
		dis=0.20;
	}
	
	
	float res=calsellingprice(&cost_price,&dis);
	printf("%f",res);
}
float calsellingprice(float* cp,float* dis)
{
	float selling_price,total_discount;
	total_discount=(*cp)*(*dis);
	selling_price=(*cp)-total_discount;
	
	return selling_price;
}