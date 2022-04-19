#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("enter number");
	scanf("%d",&n);
	do
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	while(n>0);
	printf("add is %d",sum);
}