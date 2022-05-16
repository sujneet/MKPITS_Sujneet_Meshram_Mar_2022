#include<stdio.h>
#include<conio.h>
int fun1(int a,int b)
{
	int i,power=1;
	
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	return power;
}

void main()
{
	int x,n;
	printf("Enter X & Y : ");
	scanf("%d %d",&x,&n);
	int s=fun1(x,n);
	printf("%d",s);
}