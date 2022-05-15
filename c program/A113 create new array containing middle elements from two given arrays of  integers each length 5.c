#include<stdio.h>
int main()
{
	int a[5],b[5],c[2];
	printf("Enter the 1st array : \n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	printf("Enter the 2nd array : \n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&b[i]);
	}
	c[0]=a[2];
	c[1]=b[2];
	printf("New array of middle element is : ");
	for(int i=0;i<2;i++)
	{
		printf("%d ",c[i]);
	}
}