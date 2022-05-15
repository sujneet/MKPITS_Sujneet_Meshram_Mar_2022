#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter value of x y z");
	scanf("%d %d %d",&x,&y,&z);
	if(y>x)
	{
		printf("y is greater than x");
	}
	else 
	if(z>y)
	{
		printf("z is greater than y");
	}
}