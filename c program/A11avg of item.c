#include<stdio.h>
int main()
{
	float i1,i2,w1,w2,avg;
	printf("enter 2 itms weight and number of purchase");
	scanf("%f %f %f %f",&i1,&i2,&w1,&w2);
	avg=((w1*i1)+(w2*i2))/(i1+i2);
	printf("the average value of the items is %f",avg);
}