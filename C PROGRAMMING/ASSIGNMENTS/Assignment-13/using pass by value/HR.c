#include<stdio.h>
typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
}HR;

void store(HR*);
void display(HR);

void main()
{
	
	HR H1;
	printf("**Details of student**\n");
	store(&H1); 
	printf("**Details of student are**");
	display(H1);
}
void store(HR* H1)
{
	printf("Enter HR id ,name ,salary and commission");
	scanf("%d",&H1->id);
	scanf("%s",&H1->name);
	scanf("%lf",&H1->salary);
	scanf("%lf",&H1->commission);
	
}
	
	
void display(HR H1)
{
	printf("\n");
	printf("HR ID-%d\nAdmin Name-%s\nHR Salary-%lf\nHR commission-%lf",H1.id,H1.name,H1.salary,H1.commission);

}