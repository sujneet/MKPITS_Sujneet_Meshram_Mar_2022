#include<stdio.h>
int main()
{
	int i,a[5],b[5],c[2];
	for(i=0;i<5;i++)
	{
		printf("enter 1st element array");
		scanf("%d",&a[i]);
	}
	printf("\n");
	c[0]=a[0];
	c[1]=a[4];
	for(int j=0;j<2;j++)
	{
		printf("%d",c[j]);
	}
}