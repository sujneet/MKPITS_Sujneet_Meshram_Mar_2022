#include<stdio.h>
int main()
{
	float s=0,j=1,d,i;
	for(i=1;i<=7;i=i+2)
	{
		d=i/j;
		s=s+d;
		j=j*2;
	}
	printf("value of s %f",s);
}