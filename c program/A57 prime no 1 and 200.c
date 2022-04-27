#include<stdio.h>
void main()
{
	int n,i,d;
	for(int j=0;j<200;j++)
	{
	d=0;
	i=2;
	n=j;

	while(i<n)
	{
		if(n%i==0)
		{
			d=1;
			break;
		}
		i=i+1;
	}
		if(d==0)
		{
			printf("%d ",n);
		}


}}