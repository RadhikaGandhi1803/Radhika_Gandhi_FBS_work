#include<stdio.h>
typedef struct Product
{
	int id;
	char name[20];
	char quality[10];
	double price;
}Product;

Product store();
void display(Product);

void main()
{
	
	Product p;
	p=store();
	display(p);
}

Product store()
{
	Product p;
	printf("Enter Product id ,name ,quality and price");
	scanf("%d",&p.id);
	scanf("%s",&p.name);
	scanf("%s",&p.quality);
	scanf("%lf",&p.price);
	
	return p;
}

void display(Product p)
{
	printf("\n");
	printf("Product ID-%d\nProduct Name-%s\nProduct Quality-%s\nProduct price-%lf",p.id,p.name,p.quality,p.price);

}