#include<stdio.h>
typedef struct Product
{
	int id;
	char name[20];
	char quality[10];
	double price;
}Product;

void store(Product*,int);
void display(Product*,int);

void main()
{
	
	Product p[50];
	int n;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("**Details of student**\n");
	store(p,n); 
	printf("**Details of student are**");
	display(p,n);
}

void store(Product* p,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter Product id ,name ,quality and price");
	scanf("%d",&p[i].id);
	scanf("%s",&p[i].name);
	scanf("%s",&p[i].quality);
	scanf("%lf",&p[i].price);
	}
}

void display(Product* p,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\n");
	printf("Product ID-%d\nProduct Name-%s\nProduct Quality-%s\nProduct price-%lf",p[i].id,p[i].name,p[i].quality,p[i].price);
	}
}