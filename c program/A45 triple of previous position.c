#include<stdio.h>
int main()
{
	int a[5],i,x;
	printf("enter number");
	scanf("%d",&x);
	for(i=0;i<=5;i++)
	{
		a[i]=x;
		x=3*x;
	}
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}