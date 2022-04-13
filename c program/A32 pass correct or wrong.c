#include<stdio.h>
int main()
{
	int x;
	printf("enter password");
	scanf("%d",&x);
	if(x==1234)
	{
		printf("correct pass");
	}
	else
	{
		printf("wrong pass");
	}
}