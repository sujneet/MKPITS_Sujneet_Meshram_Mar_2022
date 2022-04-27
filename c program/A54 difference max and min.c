#include<stdio.h>
void main()
{
	float a,b,c,d,dif;
	float min,max;
	printf("Enter Any Four Real Number : \n");
	scanf("%f %f %f %f",&a,&b,&c,&d);

	if(a>=b && a>=c && a>=d)
	{
		max=a;
	}
	else if(b>=a && b>=c && b>=d)
	{
		max=b;
	}
	else if(c>=a && c>=b && c>=d)
	{
		max=c;
	}
	else
	{
		max=d;
	}

	if(a<=b && a<=c && a<=d)
	{
		min=a;
	}
	else if(b<=a && b<=c && b<=d)
	{
		min=b;
	}
	else if(c<=a && c<=b && c<=d)
	{
		min=c;
	}
	else
	{
		min=d;
	}

	printf("Difference Of Min & Max is = %.2f ",max-min);
}