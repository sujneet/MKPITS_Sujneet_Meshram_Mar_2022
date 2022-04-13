#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter n");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("factorial is %d",fact);
}