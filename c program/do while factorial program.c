#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter n");
	scanf("%d",&n);
	i=n;
	do
	{
		fact=fact*i;
		i--;
	}
	while(i>=1);
	printf("fact is %d",fact);
}