#include<stdio.h>
void main() {
	int num1,num2;
	char ch;
	
	printf("Enter the numbers :");
	scanf("%d\n%d",&num1,&num2);
	
	printf("1.Enter '+' for addition\n2.Enter '-' for sunstraction \n3.Enter '*' for multiplication \n4. Enter '/' for division \n5. Enter '%%' for mod value:\n");
	scanf(" %c",&ch);
	if(ch=='+')
		printf("The addtion is %d",num1+num2);
	else {
		if(ch=='-')
			printf("The substraction is %d",num1-num2);
		else {
			if(ch=='*')
				printf("The multiplication is %d",num1*num2);
			else {
				if(ch=='/')
					printf("The division is %d",num1/num2);
				else {
					if(ch=='%')
						printf("The modulus is %d",num1%num2);
					}
			}
		}
	}
}