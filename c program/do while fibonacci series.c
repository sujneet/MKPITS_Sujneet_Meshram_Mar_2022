#include<stdio.h>
int main()
{
	int a,b,c,r;
	a=0;
	b=1;
	printf("enter number");
	scanf("%d",&r);
	printf("%d %d",a,b);
	c=0;
	do
	{
		c=a+b;
		if(c<=r)
		{
			printf("%d",c);
		}
		a=b;
		b=c;
	}
	while(c<=r);
}