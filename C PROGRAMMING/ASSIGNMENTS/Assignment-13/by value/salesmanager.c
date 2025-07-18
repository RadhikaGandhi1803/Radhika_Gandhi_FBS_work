#include<stdio.h>
typedef struct SalesManager
{
	int id;
	char name[20];
	double salary;
	int incentive;
	double target;
}SalesManager;

SalesManager store();
void display(SalesManager);
void main()
{
	
	SalesManager SM;
	SM=store();
	display(SM);
}

SalesManager store()
{
	SalesManager SM;
	printf("Enter sales managers id ,name ,salary incentive and target");
	scanf("%d",&SM.id);
	scanf("%s",&SM.name);
	scanf("%lf",&SM.salary);
	scanf("%lf",&SM.incentive);
	scanf("%lf",&SM.target);
	return SM;
}

void display(SalesManager SM)
{	
	printf("\n");
	printf(" sales manager ID-%d\n sales managerName-%s\n sales manager Salary-%lf\n sales manager incentive-%d\n sales manager taget-%lf",SM.id,SM.name,SM.salary,SM.incentive,SM.target);

}