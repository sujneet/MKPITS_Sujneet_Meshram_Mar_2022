#include<stdio.h>
#include<conio.h>

int fun();
int main()
{
	fun();
}
int fun()
{
	static int i=1;
	if(i==10)
	{
		return;
	}
	printf("%d",i);
	i++;
	fun();
	return 0;
}