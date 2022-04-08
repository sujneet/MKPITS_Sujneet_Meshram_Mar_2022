#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,positive=0,negative=0;
	printf("enter 1 numbers");
	scanf("%d",&a1);	
	printf("enter 2 numbers");
	scanf("%d",&a2);	
	printf("enter 3 numbers");
	scanf("%d",&a3);	
	printf("enter 4 numbers");
	scanf("%d",&a4);	
	printf("enter 5 numbers");
	scanf("%d",&a5);
	if(a1>0)
	{
		positive=positive+1;
	}
	else
	{
		negative=negative+1;
	}
	if(a2>0)
	{
		positive=positive+1;
	}
	else
	{
		negative=negative+1;
	}
	if(a3>0)
	{
		positive=positive+1;
	}
	else
	{
		negative=negative+1;
	}
	if(a4>0)
	{
		positive=positive+1;
	}
	else
	{
		negative=negative+1;
	}
	if(a5>0)
	{
		positive=positive+1;
	}
	else
	{
		negative=negative+1;
	}
	printf("positive numbers are %d\n",positive);
	printf("negative numbers are %d",negative);
	
}