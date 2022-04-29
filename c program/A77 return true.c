#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two integer");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum is %d ",c);
	if(a==30||b==30||c==30)
	{
		printf(" and it is true");
	}
}