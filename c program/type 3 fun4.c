#include<stdio.h>
#include<conio.h>
int fun1(int choice,int a,int b)
{

	switch(choice)
	{
		int c;
		case 1:
		c=a+b;
		return c;
		break;
		
		case 2:
		c=a-b;
		return c;
		break;
		
		case 3:
		c=a*b;
		return c;
		break;
		
		case 4:
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
	int d;
	int x,y;
	printf("Press 1 for Additon. \n");
	printf("Press 2 for Subtraction. \n");
	printf("Press 3 for Multiplication. \n");
	printf("Press 4 for Divison. \n");
	scanf("%d",&d);
	printf("Enter any two Numbers : \n");
	scanf("%d %d",&x,&y);
	
	int h=fun1(d,x,y);
	if(h>0)
	{
		printf("%d",h);
	}
	else
	{
		printf("I am in default");
	}
}