#include<stdio.h>
int main()
{
	int i,a[5],b[5],c[2];
	
	for(i=0;i<5;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");

	for(i=0;i<5;i++)
	{
		printf("Enter 2nd Array element : ");
		scanf("%d",&b[i]);
	}
	
	c[0]=a[2];
	c[1]=b[2];
	for(int j=0;j<2;j++)
	{
		printf("%d ",c[j]);
	}
	
}