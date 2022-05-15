#include<stdio.h>
int main()
{
	int a;
	printf("enter positive number");
	scanf("%d",&a);
	if(a%13==0 || a%13==1)
	{
		printf("it is multiple of 13");
	}
	else
	{
		printf("not multiple of 13");
	}
}