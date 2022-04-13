#include<stdio.h>
int main()
{
	int n,sum=0,r,o;
	printf("enter any number");
	scanf("%d",&n);
	o=n;
	while(n)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(o==sum)
	{
		printf("it is armstrong number");
	}
	else
	{
		printf("it is not armstrong");
	}
}