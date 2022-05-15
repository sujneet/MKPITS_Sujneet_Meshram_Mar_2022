#include<stdio.h>
int main()
{
	int sum,diff,a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	sum=a+b;
	diff=a-b;
	if(a==5 || b==5 || sum==5 || diff==5)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}