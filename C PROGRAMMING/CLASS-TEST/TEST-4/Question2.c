//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int base,exp;
//	printf("Enter the base and exponent");
//	scanf("%d%d",&base,&exp);
//	int result=pow(base,exp);
//	printf("%d^%d=%d",base,exp,result);
//}


#include<stdio.h>
void main()
{
	int base,exp;
	printf("Enter the base and exponent");
	scanf("%d%d",&base,&exp);
	int power=1;
	for(int i=1;i<=exp;i++)
	{
		power=power*base;	
	}
	printf("%d",power);
}

