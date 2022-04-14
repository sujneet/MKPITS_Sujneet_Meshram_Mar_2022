#include<stdio.h>
int main()
{
	int n,i,d=0;
	printf("enter number");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			d=1;
			break;
		}
		i=i+1;
	}
	if(d==0)
	{
		printf("it is prime number");
	}
	else
	{
		printf("it is not prime number");
	}
}