#include<stdio.h>
int main()
{
	float s1,s2,s3,p;
	printf("enter 3 sides of triangle");
	scanf("%f %f %f",&s1,&s2,&s3);
	if((s1+s2>s3)&&(s2+s3>s1)&&(s3+s1>s2))
	{
		printf("perimeter of triangle");
		p=s1+s2+s3;
		printf("perimeter of triangle is %f\n it is valid",p);
	}
	else
	{
		printf("invalid");
	}
}