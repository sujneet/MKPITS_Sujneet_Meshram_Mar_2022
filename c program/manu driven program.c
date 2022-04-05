#include<stdio.h>
int main()
{
	int choice,a,b,res;
	printf("press 1 for addition");
	
	printf("press 2 for substraction");
	
	printf("press 3 for multiplication");
	
	printf("press 4 for division");
	scanf("%d",&choice);
	scanf("%d %d",&a,&b);
	if(choice==1)
	{
		res=a+b;
		printf("sum is %d",res);
	}
	else
	if(choice==2)
	{
		res=a-b;
		printf("sub is %d",res);
	}
	else
	if(choice==3)
	{
		res=a*b;
		printf("mul is %d",res);
	}
	else
	if(choice==4)
	{
		res=a/b;
		printf("div is %d",res);
	}
	else
	{
		printf("invalid choice");
	}
	
}