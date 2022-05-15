#include<stdio.h>
int main()
{
	int a;
	printf("enter positive number");
	scanf("%d",&a);
	if(a%3==0 && a%7==0)
	{
		printf("not the multiple of 3 or 7");
	}
	else
	if(a%3==0)
	{
		printf("multiple of 3");
	}
	else
	if(a%7==0)
	{
		printf("multiple of 3");
	}
	else
	{
		printf("not multiple of 3 or 7");
	}
}