#include<stdio.h>
void main()
{
	int n,sum=0,r;
	printf("Enter Number Less Than 500 : ");
	scanf("%d",&n);
	if(n<1 || n>500)
	{
		printf("Wrong Input");
	}
	else
	{
		while(n>0)    
		{    
			r=n%10;    
			sum=sum+r;    
			n=n/10;    
		}
		printf("Addition of Number is = %d",sum);
	}
}