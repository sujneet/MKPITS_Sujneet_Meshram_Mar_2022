#include<stdio.h>
#include<conio.h>
void fun1(int x)
{
	int sum=0,r;
	while(x>0)    
	{    
	r=x%10;    
	
	sum=sum*10+r;
	
	x=x/10;    
	}
	printf("%d",sum);
}

void main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	fun1(n);
}