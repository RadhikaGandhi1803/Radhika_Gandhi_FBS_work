#include<stdio.h>
void main()
{
	
	int s1=85,s2=78,s3=77,s4=89,s5=90;
	float total,percentage;
	
	total=s1+s2+s3+s4+s5;
	percentage=(total/500)*100;
	
	printf("Total of given marks is :%f\n",total);
	printf("Percentage of given marks is :%f",percentage);
}