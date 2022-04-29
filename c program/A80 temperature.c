#include<stdio.h>
int main()
{
	int n;
	printf("enter temperature");
	scanf("%d",&n);
	if(n<0)
	{
		printf("temperature is less then 0");
	}
	else
	if(n>100)
	{
		printf("temperature is greater then 100");

	}
	else
	{
		printf("it is  not in range in 0 and 100");
	}
}