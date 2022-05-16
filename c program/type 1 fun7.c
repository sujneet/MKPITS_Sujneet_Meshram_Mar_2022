#include<stdio.h>
void fun1()
{
	int x,n,i,power=1;
	printf("Enter X & Y : ");
	scanf("%d %d",&x,&n);
	
	for(i=1;i<=n;i++)
	{
		power=power*x;
	}
	printf("%d",power);
}

void main()
{
	fun1();
}