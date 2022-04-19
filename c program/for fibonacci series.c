#include<stdio.h>
int main()
{
	int a,b,c,r;
	a=0;
	b=1;
	printf("enter number");
	scanf("%d",&r);
	printf("%d %d",a,b);
	for(c=0;c<=r;)
	{
		c=a+b;
		if(c<=r)
		{
			printf("%d\n",c);
		}
		a=b;
		b=c;
	}
}