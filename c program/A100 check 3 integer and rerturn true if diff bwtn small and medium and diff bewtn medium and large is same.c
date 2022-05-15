#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,res1,res2;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
	scanf("%d",&b);
	printf("Enter 3rd number : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		res1=a-b;	
	}
	else
	{
		res1=b-a;
	}
	if(b>c)
	{
		res2=b-c;
	}
	else
	{
		res2=c-b;
	}
	
	if(res1==res2)
	{
		printf("True !");
	}
	else
	{
		printf("False !");
	}
}