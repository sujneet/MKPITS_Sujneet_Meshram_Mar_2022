#include<stdio.h>
#include<conio.h>
int fun1(int x)
{
	int sum=0,r;
	while(x>0)    
	{    
	r=x%10;    
	
	sum=sum*10+r;
	
	x=x/10;    
	}
	return sum;
}

void main()
{
	int n,z;
	printf("Enter any number : ");
	scanf("%d",&n);
	z=fun1(n);
	printf("%d",z);
}