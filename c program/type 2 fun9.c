#include<stdio.h>
#include<conio.h>
int fun1()
{
	int n,sum=0,r;
	printf("Enter any number : ");
	scanf("%d",&n);
	while(n>0)    
	{    
	r=n%10;    
	
	sum=sum*10+r;
	
	n=n/10;    
	}
	return sum;
}

void main()
{
	int x=fun1();
	printf("%d",x);
	
}