#include<stdio.h>
int main()
{
	int n,diff;
	printf("enter n");
	scanf("%d",&n);
	diff=51-n;
	printf("absolute difference between n and 51 is %d ",diff);
	if(n>51)
	{
		printf("triple the absolute difference is %d",(n-51)*3);
	}
}