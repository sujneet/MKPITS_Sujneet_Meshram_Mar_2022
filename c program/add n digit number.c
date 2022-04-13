#include<stdio.h>
int main()
{
	int n,sum=0,m,rev=0,temp,result;
	printf("enter number\n");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
		rev=rev*10+m;
	}
	if(rev==temp)
	{
		printf("it is palindrom\n");
	}
	else
	{
		printf("it is not palindrom\n");
	}
	printf(" sum is %d\n",sum);
	printf("reverse number is %d\n",rev);
}