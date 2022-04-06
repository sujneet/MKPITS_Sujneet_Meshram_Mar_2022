#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three integers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is maximun",a);
	}
	else 
	if(b>a&&b>c)
	{
		printf("%d is maximum",b);
	}
	else
	if(c>a&&c>b)
	{
		printf("%d is maximum",c);
	}
}