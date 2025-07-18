#include<stdio.h>
typedef struct song
{
	int id;
	char title[40];
	char artist[50];
	int duration;
}song;

void storesong(song*,int);
void displaysong(song*,int);

void main()
{
	song S1[20];

		for(int i=0;i<2;i++)
		{
	
		int choice;
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:storesong(S1,2);
				break;
			case 2:displaysong(S1,2);
				break;
			default:printf("Invalid choice");
		}
	}

}

void storesong(song* S1,int count)
{
	for(int i=0;i<count;i++)
	{
		printf("Enter the ID:\n");
		scanf("%d",&S1[i].id);
		
		printf("Enter the title:\n");
		scanf("%s",S1[i].title);
		
		printf("Enter the artist:\n");
		scanf("%s",S1[i].artist);
		
		printf("Enter the duration:\n");
		scanf("%d",&S1[i].duration);
	}
}


void displaysong(song* S1,int count)
{
	
	for(int i=0;i<count;i++)
	{
		printf("ID is    	: %d\n",S1[i].id);	
		printf("Title is 	: %s\n",S1[i].title);
		printf("Artist is 	:  %s\n",S1[i].artist);
		printf("Duration is :	%d\n",S1[i].duration);
	
	}
}