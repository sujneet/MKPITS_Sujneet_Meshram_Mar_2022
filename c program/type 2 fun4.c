#include<stdio.h>
#include<conio.h>
int fun1()
{
	int x,n,i,power=1;
	printf("Enter X & Y : ");
	scanf("%d %d",&x,&n);
	
	for(i=1;i<=n;i++)
	{
		power=power*x;
	}
	return power;
}

void main()
{
	int s=fun1();
	printf("%d",s);
}