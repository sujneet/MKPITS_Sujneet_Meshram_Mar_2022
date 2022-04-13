#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("enter number");
	scanf("%d",&n);
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("reverse is %d",rev);
}