#include<stdio.h>
#include<conio.h>
int main()
{
	int num,r;
	printf("enter number");
	scanf("%d",&num);
	r=num%4;
	if(r==0)
	{
		printf("number is divisible by 4");
	}
	if(r!=0)
	{
		printf("number is not divisible by 4");
	}
}
