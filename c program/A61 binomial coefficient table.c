#include<stdio.h>
void main()
{
	int n, a, b;
	n=0;
	do
	{
		a = 0, b = 1;    
		printf("%2d", n);
	while(a<=n)
	{
		if(n==0 || a==0)
		printf("%4d", b);
	else
	{
		b=b* (n-a+1)/a;
		printf("%4d", b);
	}
		a=a+1;
	}
		printf("\n");
		n=n+1;
	}
	while(n<=10);



}
