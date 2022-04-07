#include<stdio.h>
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}