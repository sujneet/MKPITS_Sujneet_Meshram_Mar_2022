#include<stdio.h>
int main()
{
	int num,a ,b,c,add;
	printf("enter 3 digit number");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	add=a+b+c;
	printf("addition=%d",add);
}
