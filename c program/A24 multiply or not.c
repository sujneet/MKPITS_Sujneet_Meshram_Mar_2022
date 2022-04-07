#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a b");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		c=a%b;
		printf("multiplied %d",c);
	}
	else
	{
		printf("not multiplied");
	}
}