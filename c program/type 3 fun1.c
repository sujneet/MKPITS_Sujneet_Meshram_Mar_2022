#include<stdio.h>
#include<conio.h>

int fun1(int a)
{
	
	if(a%3==0)
	{
		return 1;
		
	}
	else if(a%7==0)
	{
		return 0;
	}
	
}

void main()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);

	int x = fun1(n);
	if(x==1)
	{
		printf("Entered is a Multiple Of 3 ");
	}
	else if(x==0)
	{
		printf("Entered is a Multiple Of 7 ");
	}
	else
	{
		printf("Entered is not a Multiple of 3 or 7 ");
	}
	
}