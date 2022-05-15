#include<stdio.h>
int main()
{
	int a,b,r1,r2;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	if(a==b)
	{
		printf("0");
	}
	else
	{
		r1=a%5;
		r2=b%5;
		if(r1==r2)
		{
			if(a<b)
			{
				printf("%d is smaller",a);
			}
			else
			{
				printf("%d is smaller",b);
			}
		}
		if(a>b)
		{
				printf("%d is greater",a);
			}
			else
			{
				printf("%d is greater",b);
			}
		}
	}
