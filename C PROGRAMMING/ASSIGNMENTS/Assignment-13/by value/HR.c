#include<stdio.h>
typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
}HR;

HR store();
void display(HR);

void main()
{
	
	HR H1;
	H1=store();
	display(H1);
}
HR store()
{
	HR H1;
	printf("Enter HR id ,name ,salary and commission");
	scanf("%d",&H1.id);
	scanf("%s",&H1.name);
	scanf("%lf",&H1.salary);
	scanf("%lf",&H1.commission);
	return H1;
}
	
	
void display(HR H1)
{
	printf("\n");
	printf("HR ID-%d\nAdmin Name-%s\nHR Salary-%lf\nHR commission-%lf",H1.id,H1.name,H1.salary,H1.commission);

}