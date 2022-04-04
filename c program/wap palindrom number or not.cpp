#include<stdio.h>
int main()
{
	int num,a,b,c,d,rev;
	printf("enter 3 digit");
	scanf("%d",&d);
	num=d;
	
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;
	
	c=num%10;
	num=num/10;
	
	rev=a*100+b*10+c*1;
	if(d==rev)
	{
		printf("it is palindrom number");
	}
	else
	{
		printf("it is not palindrom number");
	}
}
