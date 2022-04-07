#include<stdio.h>
int main()
{
	int a;
	printf("enter integer");
	scanf("%d",&a);
	if(a<0)
	{
	printf("error");
	}
	else
	if(a>80)
	{
	printf("error");
	}
	else
	{
		printf("value is true %d",a);
	}
}