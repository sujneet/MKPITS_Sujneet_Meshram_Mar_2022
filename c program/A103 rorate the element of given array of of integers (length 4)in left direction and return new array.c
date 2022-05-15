#include<stdio.h>
int main()
{
	int i,j,a[4];
	
	for(i=0;i<4;i++)
	{
		printf("Enter Array Element : ");
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<4;i++)
	{
		if(i==0)
		{
			j=a[i];
		}
		
		a[i]=a[i+1];
		
		if(i==3)
		{
			a[i]= j;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	
	
	
}
