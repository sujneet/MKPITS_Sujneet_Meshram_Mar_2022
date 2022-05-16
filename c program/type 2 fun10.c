#include<stdio.h>
#include<conio.h>
int fun1()
{
	int choice;
	int a,b,c;
	printf("Press 1 for Additon. \n");
	printf("Press 2 for Subtraction. \n");
	printf("Press 3 for Multiplication. \n");
	printf("Press 4 for Divison. \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a+b;
		return c;
		break;
		
		case 2:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a-b;
		return c;
		break;
		
		case 3:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a*b;
		return c;
		break;
		
		case 4:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a/b;
		return c;
		break;
		
		default :
		return 0;
		break;
	}
	
}

void main()
{
	int x=fun1();
	if(x>0)
	{
		printf("%d",x);
	}
	else
	{
		printf("I am in default");
	}
}