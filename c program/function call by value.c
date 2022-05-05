#include<stdio.h>
int fun();
int main()
{
	int a=2,b=3;
	printf("a=%d b=%d",a,b);
	fun(a,b);
	printf("a=%d b=%d",a,b);
}
int fun(int x ,int y)
{
	x=12;
	y=13;
}