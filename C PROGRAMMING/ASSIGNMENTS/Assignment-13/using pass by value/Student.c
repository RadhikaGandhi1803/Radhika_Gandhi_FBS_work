#include<stdio.h>
typedef struct Student
{
	int rollno;
	char name[20];
}Student;

void store(Student*);
void display(Student);

void main()
{
	
	Student S1;
	printf("**Details of student**\n");
	store(&S1); 
	printf("**Details of student are**");
	display(S1);
}

void store(Student * S1)
{
	printf("Enter roll no and name");
	scanf("%d",&S1->rollno);
	scanf("%s",&S1->name);
	
}

void display(Student S1)
{
	printf("\n\n");
	printf("Roll no-%d\nName-%s",S1.rollno,S1.name);
}
