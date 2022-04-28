#include<stdio.h>
void main()
{
	int x,n,i,power=1;
	printf("Enter X & n : ");
	scanf("%d %d",&x,&n);

	for(i=1;i<=n;i++)
	{
		power=power*x;
	}
	printf("Power of %d is %d",x,power);
}
