#include<stdio.h>
int add();
int main()
{
	add();
}
int add()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf(" sum =%d",c);
}