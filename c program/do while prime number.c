#include<stdio.h>
int main()
{
	int num,i,m=0;
	printf("enter number");
	scanf("%d",&num);
	i=1;
	do
	{
		if(num%i==0)
		{
			m=m+1;
		}
		i++;
	}
	while(i<=num);
	if(m==2)
	{
		printf("it is prime number");
	}
	else
	{
		printf("it is not prime number");
	}
}