#include<stdio.h>
int main() 
{
	int a,i=0,sum=0,max,min;
	float avg;
	printf("Enter Any Positive integer : ");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Enter Positive number :");
	}
	else
	{
		min=a;
		max=a;	
		while(a>0)
		{
			i=i+1;
			sum=sum+a;
		if(a>max)
		{
			max=a;
		}
		if(a<min)
		{
			min=a;
		}
		printf("Enter Any Positive integer : ");
		scanf("%d",&a);
		}
	}
	avg=sum/i;
	printf("Min= %d \n",min);
	printf("Max= %d \n",max);
	printf("Average = %.2f \n",avg);
	printf("Total Positive Integer is = %d \n",i);
}