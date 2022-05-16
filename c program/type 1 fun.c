#include<stdio.h>
int fun1()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	if(n%3==0)
	{
		printf("%d is a Multiple Of 3 ",n);
		
	}
	else if(n%7==0)
	{
		printf("%d is a Multiple Of 7 ",n);
	}
	else
	{
		printf("%d is not a Multiple of 3 or 7 ",n);
	}
}

void main()
{
	fun1();
}