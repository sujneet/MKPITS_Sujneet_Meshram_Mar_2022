#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("factorial is %d",fact);
}