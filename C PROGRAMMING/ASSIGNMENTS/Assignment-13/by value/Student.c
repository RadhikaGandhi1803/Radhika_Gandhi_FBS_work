#include<stdio.h>
typedef struct Student
{
	int rollno;
	char name[20];
}Student;

Student store();
void display(Student);

void main()
{
	
	Student S1;
	S1=store();
	display(S1);
}

Student store()
{
	Student S1;
	printf("Enter roll no and name");
	scanf("%d",&S1.rollno);
	scanf("%s",&S1.name);
	
	return S1;
}

void display(Student S1)
{
	printf("\n\n");
	printf("Roll no-%d\nName-%s",S1.rollno,S1.name);
}
