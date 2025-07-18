

//TYPE-3
#include<stdio.h>
void perfectnum(int*);
void main() 
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	perfectnum(&num);
}

void perfectnum(int* num)
{

	int i=1,sum=0;

	while(i<=*num/2) {
		if(*num%i==0) {
			sum+=i;
		}
		i++;
	}
	if(sum==*num && *num!=0) {
		printf("The number is perfect");
	} else {
		printf("not");
	}
}
