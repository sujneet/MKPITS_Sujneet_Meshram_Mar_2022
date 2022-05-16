#include<stdio.h>
void fun1()
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
		printf("Additon is = %d",c);
		break;
		
		case 2:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a-b;
		printf("Sub is = %d",c);
		break;
		
		case 3:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
		c=a*b;
		printf("mul is = %d",c);
		break;
		
		case 4:
		printf("Enter any two Numbers : \n");
		scanf("%d %d",&a,&b);
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
	fun1();
}