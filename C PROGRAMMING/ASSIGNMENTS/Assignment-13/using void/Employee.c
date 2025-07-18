#include<stdio.h>
typedef struct Employee
{
	int eid;
	char name[20];
	double salary;
}Employee;


void main()
{
	
	Employee E1;
	printf("Enter employee id ,name and salary");
	scanf("%d",&E1.eid);
	scanf("%s",&E1.name);
	scanf("%lf",&E1.salary);
	
	
	printf("\n");
	printf("Employee ID-%d\nEmployee Name-%s\nEmployee Salary-%lf",E1.eid,E1.name,E1.salary);

}