#include<stdio.h>
int main()
{
	int choice;
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			printf("it is case 1\n"); 
			break;
		case 2:
			printf("it is case 2\n");
			break;
		case 3:
			printf("it is case 3\n");
			break;
		case 4:
			printf("it is case 4\n");
			break;
		default:
			printf("i am default");
	
	}
}