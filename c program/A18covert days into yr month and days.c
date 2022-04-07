#include<stdio.h>
int main()
{
	int days,y,m,d;
	printf("enter days\n");
	scanf("%d",&days);
	y=days/365;
	m=(days-(y*365))/30;
	d=(days-(y*365)-(m*30));
	printf("%d years %d months %d days",y,m,d);
}