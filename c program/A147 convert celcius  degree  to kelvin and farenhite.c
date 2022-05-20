#include<stdio.h>
int main()
{
	float celsius,fahr,kelvin;
	
	printf("Enter Temperature in  Celsius : ");
	scanf("%f",&celsius);
	
	kelvin = 273.15 +celsius;
	fahr = 1.8 *celsius + 32;
	
	printf("\n%.2f Celsius is = %.2f kelvin\n\n",celsius,kelvin);
	printf("%.2f Celsius is = %.2f Fahrenheit",celsius,fahr);
	}