#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 integer");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum is %d ",c);
	if(a==b)
	{
		printf("triple of their of sum is %d",a+a+a);
	}
	
}