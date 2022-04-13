#include<stdio.h>
int main()
{
	int n,sum=0,m;
	printf("enter number");
	scanf("%d",&n);
	while(n)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum %d",sum);
}