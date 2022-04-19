#include<stdio.h>
int main()
{
	int t,n,sum=0,r;
	printf("enter number");
	scanf("%d",&n);
	t=n;
	do
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	while(n>0);
	if(t==sum)
	{
		printf("number is palindrom");
	}
	else
	{
		printf("number is not palindrom");
	}
}