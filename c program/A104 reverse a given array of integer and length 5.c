#include<stdio.h>
int main()
{
	int i,j,a[5];
	for(i=0;i<5;i++)
	{
		printf("enter 5 element array");
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}