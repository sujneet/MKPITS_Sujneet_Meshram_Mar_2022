#include<stdio.h>
#include<conio.h>
void fun1(int choice,int a,int b)
{

	switch(choice)
	{
		int c;
		case 1:
		c=a+b;
		printf("Additon is = %d",c);
		break;
		
		case 2:
		c=a-b;
		printf("Sub is = %d",c);
		break;
		
		case 3:
		c=a*b;
		printf("mul is = %d",c);
		break;
		
		case 4:
		c=a/b;
		printf("Div is = %d",c);
		break;
		
		default :
		printf("I am in default");
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
	
	fun1(d,x,y);
}