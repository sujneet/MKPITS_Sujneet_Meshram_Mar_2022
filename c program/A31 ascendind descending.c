#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		printf("decending order");
	}
	else 
	{
		printf("ascending order");
	}
}