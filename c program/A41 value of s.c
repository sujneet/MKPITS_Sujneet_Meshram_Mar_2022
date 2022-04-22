#include<stdio.h>
int main()
{
	float s=0,i;
	for(i=1;i<=50;i++)
	{
		s=s+1/i;
	}
	printf("value of s %f",s);
}