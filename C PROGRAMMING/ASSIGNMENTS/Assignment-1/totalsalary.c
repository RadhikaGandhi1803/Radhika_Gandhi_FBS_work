#include<stdio.h>
void main()
{
	double basic_sal=3000;
	double DA,TA,HRA,total_sal;
	
	if(basic_sal<=5000)
	{
		DA=basic_sal*0.10;
		TA=basic_sal*0.20;
		HRA=basic_sal*0.25;
	}
	else
	{
		DA=basic_sal*0.15;
		TA=basic_sal*0.25;
		HRA=basic_sal*0.30;
	}
	
	total_sal=basic_sal+DA+TA+HRA;
	
	printf("Total salary is %lf",total_sal);
}