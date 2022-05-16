#include<stdio.h>
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
	printf("%d",sum);
}

void main()
{
	fun1();
}