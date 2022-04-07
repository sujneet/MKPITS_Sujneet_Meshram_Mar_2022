#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,a,b,c,p;
	printf("enter a b c \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	p=(b*b)-(4*a*c);
	printf("%d\n",p);
	p=sqrt(p);
	if(p>0)
	{
	x=(-b+p)/(2*a);
	y=(-b-p)/(2*a);
	printf("roots are %lf and %lf",x,y);
	}
	else
	{
		printf("it is not possible");
	}
	
	
}