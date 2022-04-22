#include<stdio.h>
int main()
{
	int d,i;
	printf("enter number");
	scanf("%d",&d);
	printf("divisor are %d",d);
	for(i=1;i<=d;i++)
	{
		if((d%i)==0)
		{
			printf("\n%d",i);
			printf("\n");
		}
		
	}
}