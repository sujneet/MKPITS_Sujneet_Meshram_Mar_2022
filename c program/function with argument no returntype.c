#include<stdio.h>
int fun1();
int add();
int main()
{
	fun1();
}
int fun1()
{
	int a=2,b=4;
	add(a,b);
}
int add(int x,int y)
{
	int r;
	r=x+y;
	printf(" sum is %d",r);
}