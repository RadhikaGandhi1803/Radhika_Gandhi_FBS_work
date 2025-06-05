#include<stdio.h>
void main() {
	int s1,s2,s3;
		printf("Enter sides of triangle as s1,s2,s3: ");
		scanf("%d\n%d\n%d",&s1,&s2,&s3);
		
		if(s1==s2 && s2==s3 ) 
		{
		printf("The triangle is equilateral triangle");
		} else if(s1==s3||s2==s3 || s1==s2)
    	{
			printf("The triangle is isoscales triangle");
		} else
		 {
			printf("The triangle is scalene");
		}
}