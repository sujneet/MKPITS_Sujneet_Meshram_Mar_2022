#include<stdio.h>
#include<conio.h>
int fun(int a);
int main()
{
	fun(1);
}
int fun(int a)
{
	if(a==10)
	{
		return;
	}
	printf("%d",a);
	fun(a+1);
	printf("%d\n",a);
	
}