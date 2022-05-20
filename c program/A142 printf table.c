#include<stdio.h>
int main()
{
	int n,m,i;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		m=n*i;
		printf("%d\n",m);
	}
}