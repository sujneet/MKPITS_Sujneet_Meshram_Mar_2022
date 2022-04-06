#include<stdio.h>
int main()
{
	int a,b,res;
	char choice;
	printf("press + for addition\n");	
	printf("press - for substraction\n");	
	printf("press * for multiplication\n");	
	printf("press / for division\n");
	scanf("%c",&choice);
	scanf("%d %d",&a,&b);
	switch(choice)
	{
	case '+':
		res=a+b;
		printf("sum is %d",res);
		break;
	case '-':
		res=a-b;
		printf("sub is %d",res);
		break;
	case '*':
		res=a*b;
		printf("mul is %d",res);
		break;
	case '/':
		res=a/b;
		printf("div is %d",res);
		break;
	default:
		printf("invalid choice");
	}
	
}