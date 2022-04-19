#include<stdio.h>
int main()
{
	int n,i,m=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			m=m+1;
		}
	}
	if(m==2)
	{
		printf("it is prime number");	
	}
	else
	{
		printf("it is not prime number");
	}
}