#include<stdio.h>
#include<conio.h>

void fun1(int a)
{
	
	if(a%3==0)
	{
		printf("Entered is a Multiple Of 3 ");
		
	}
	else if(a%7==0)
	{
		printf("Entered is a Multiple Of 7 ");
	}
	else
	{
		printf("Entered is not a Multiple of 3 or 7 ");
	}
	
}

void main()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);

	fun1(n);
	
}