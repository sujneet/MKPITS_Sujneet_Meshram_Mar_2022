#include<stdio.h>
void main()
{
	int i,res;
	printf("Enter Any Negative Number :");
	scanf("%d",&i);
	if(i<0)
	{
		res=i*(-1);
		printf("Result = %d",res);
	}
}