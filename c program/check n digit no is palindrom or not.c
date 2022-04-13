#include<stdio.h>
int main()
{
	int n,rev=0,rem,orignal;
	printf("enter number");
	scanf("%d",&n);
	orignal=n;
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==orignal)
	{
		printf("%d is palindrom",orignal);
	}
	else
	{
		printf("%d is not palindrom",orignal);
	}
}