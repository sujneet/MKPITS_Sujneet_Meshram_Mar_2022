#include<stdio.h>
int main()
{
	int n,sum=0,t,r;
	printf("enter any number");
	scanf("%d",&n);
	for(t=n;n>0;)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t==sum)
	{
		printf("number is palindrom");
	}
	else
	{
		printf("number is not palindrom");
	}
}