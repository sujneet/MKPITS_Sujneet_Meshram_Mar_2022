#include<stdio.h>
int main()
{
	int i,j,a[3];
	
	for(i=0;i<3;i++)
	{
		printf("Enter Array Element : ");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<3;i++)
	{
		if(a[i]==5 && a[i+1]==7)
		{
		a[i+1]=1;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);	
	}
}