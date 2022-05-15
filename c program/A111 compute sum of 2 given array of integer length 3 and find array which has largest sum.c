#include<stdio.h>
int main()
{
	int a[3],b[3],sum1=0,sum2=0;
	printf("Enter the 1st array : \n");
	for(int i=0;i<3;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("Enter the 2nd array : \n");
	for(int i=0;i<3;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&b[i]);
		sum2=sum2+b[i];
	}
	if(sum1>sum2)
	{
		printf("Largest sum array is : \n");
		for(int i=0;i<3;i++)
		{
		printf("%d ",a[i]);
		}	
	}
	else
	{
		printf("Largest sum array is : \n");
		for(int i=0;i<3;i++)
		{
			printf("%d ",b[i]);
		}		
	}	
}