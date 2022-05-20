#include<stdio.h>
int main()
{
	int a,b,c,d;
	float avg;
	printf("enter 4 number");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	avg=(a+b+c+d)/4;
	printf("average is %f",avg);
}