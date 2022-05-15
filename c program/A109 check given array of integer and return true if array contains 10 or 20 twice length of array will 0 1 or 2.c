#include<stdio.h>
int main()
{
	int i,n,x=0,y=0;
	
	printf("Enter Size Of Array  less than 3 \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(int j=0;j<n;j++)
	{
		if(a[j]==10)
		{
			x=x+1;
		}
		if(a[j]==20)
		{
			y=y+1;
		}
	}
	if(x==2 || y==2)
	{
		printf("True !");
	}
	else
	{
		printf("False !");
	}
	
}