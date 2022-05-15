#include<stdio.h>
int main()
{
	int a;
	printf("enter integer");
	scanf("%d",&a);
	if(a%10<=2 || a%10>=8)
	{
		printf("2 of a multiple of 10");
	}
	else
	{
		printf("not a 2 of a multiple of 10");
	}
}