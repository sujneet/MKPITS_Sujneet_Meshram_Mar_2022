#include<stdio.h>
int main()
{
	int yr;
	printf("enter yr");
	scanf("%d",&yr);
	if(yr%400==0||yr%100==0||yr%4==0)
	{
		printf("it is leap year");
	}
	else
	{
		printf("it is not leap year");
	}
}