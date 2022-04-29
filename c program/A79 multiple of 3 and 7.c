#include<stdio.h>
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	if(a%3==0)
	{
		printf("it is multiple of 3");
	}
	else 
	if(a%7==0)
	{
		printf("it is miltiple of 7");
	}
	else
	{
		printf("it is not multiple of 3 and 7");
	}
}