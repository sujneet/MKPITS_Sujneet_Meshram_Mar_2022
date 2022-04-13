#include<stdio.h>
int main()
{
	int x,y;
	float z;
	printf("enter 2 numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		z=x/y;
		printf("%f",z);
	}
	else
	{
		printf("division not possible");
	}
}