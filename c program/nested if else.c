#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a b c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greater",a);
	}
	if(b>a&&b>c)
	{
		printf("b is greater",b);
	}
	else
	{
		printf("c is greater",c);
	}
}