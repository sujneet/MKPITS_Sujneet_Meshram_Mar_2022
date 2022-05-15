#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st 2nd 3rd number");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b+c || b==c+a || c==a+b)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}