#include<stdio.h>
typedef struct Student
{
	int rollno;
	char name[20];
}Student;

void store(Student*,int);
void display(Student*,int);

void main()
{
	
	Student S1[50];
	int n;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("**Details of student**\n");
	store(S1,n); 
	printf("**Details of student are**");
	display(S1,n);
}

void store(Student * S1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter roll no and name");
	scanf("%d",&S1[i].rollno);
	scanf("%s",&S1[i].name);
	}
}

void display(Student* S1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\n\n");
	printf("Roll no-%d\nName-%s",S1[i].rollno,S1[i].name);
	}
}