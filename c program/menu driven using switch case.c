#include<stdio.h>
int main()
{
	int a,b,res;
	char choice;
	printf("press 1 for addition\n");	
	printf("press 2 for substraction\n");	
	printf("press 3 for multiplication\n");	
	printf("press 4 for division\n");
	scanf("%d",&choice);
	scanf("%d %d",&a,&b);
	switch(choice)
	{
	case 1:
		res=a+b;
		printf("sum is %d",res);
	break;
	case 2:
		res=a-b;
		printf("sub is %d",res);
	break;
	case 3:
		res=a*b;
		printf("mul is %d",res);
	break;
	case 4:
		res=a/b;
		printf("div is %d",res);
	break;
	default:
		printf("invalid choice");
}
	
}