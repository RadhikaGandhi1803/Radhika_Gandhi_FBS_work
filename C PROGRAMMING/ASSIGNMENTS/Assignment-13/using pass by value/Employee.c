#include<stdio.h>
typedef struct Employee
{
	int eid;
	char name[20];
	double salary;
}Employee;

void store(Employee*);
void display(Employee);

void main()
{
	
	Employee E1;
	printf("**Details of student**\n");
	store(&E1); 
	printf("**Details of student are**");
	display(E1);
}

void store(Employee* E1)
{
	printf("Enter employee id ,name and salary");
	scanf("%d",&E1->eid);
	scanf("%s",&E1->name);
	scanf("%lf",&E1->salary);
	
}

void display(Employee E1)
{	
	printf("\n");
	printf("Employee ID-%d\nEmployee Name-%s\nEmployee Salary-%lf",E1.eid,E1.name,E1.salary);

}