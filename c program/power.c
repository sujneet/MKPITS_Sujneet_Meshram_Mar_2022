#include<stdio.h>
int main()
{
	int x,y,i,pow=1;
	printf("enter x and y");
	scanf("%d %d",&x,&y);
	i=1;
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("x to the power y is %d",pow);
}