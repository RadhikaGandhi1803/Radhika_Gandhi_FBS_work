#include<stdio.h>
typedef struct Admin
{
	int aid;
	char name[20];
	double salary;
	double allowance;
}Admin;


Admin store();
void display(Admin);
void main()
{
	Admin A1;
	A1=store();
	display(A1);
	
}
Admin store()
{
	Admin A1;
	printf("Enter Admin id ,name ,salary and allowance");
	scanf("%d",&A1.aid);
	scanf("%s",&A1.name);
	scanf("%lf",&A1.salary);
	scanf("%lf",&A1.allowance);
	
	return A1;
}
void display(Admin A1)
{	
	printf("\n");
	printf("Admin ID-%d\nAdmin Name-%s\nAdmin Salary-%lf\nAdmin Allowance-%lf",A1.aid,A1.name,A1.salary,A1.allowance);

}