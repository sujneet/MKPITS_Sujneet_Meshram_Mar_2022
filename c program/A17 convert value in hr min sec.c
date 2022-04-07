#include<stdio.h>
int main()
{
	int sec,h,m,s;
	printf("enter sec\n");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h)-(m*60));
	printf("hr min sec is %d %d %d",h,m,s);
}