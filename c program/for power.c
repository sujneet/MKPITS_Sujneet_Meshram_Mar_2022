#include<stdio.h>
int main()
{
	int x,y,i,pow=1;
	printf("enter x and y");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
	{
		pow=pow*x;
	}
	printf("x to the power y is %d",pow);
}