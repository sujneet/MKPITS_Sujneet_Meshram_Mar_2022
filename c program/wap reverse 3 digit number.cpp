#include<stdio.h>
int main()
{
	int num,a ,b,c,rev;
	printf("enter 3 digit number");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	rev=a*100+b*10+c*1;
	printf("reverse=%d",rev);
}
