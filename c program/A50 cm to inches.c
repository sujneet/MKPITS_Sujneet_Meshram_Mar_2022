#include<stdio.h>
#include<conio.h>
void main()
{
	float c,i;
	printf("Enter A Distance In Centimeter : ");
	scanf("%f",&c);

	i=c/2.54;

	printf("Distance of %f = %f inch",c,i);
}