#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		if(i%2==0)
		{
			printf("%d",i*i);
		}
		i++;
	}
	while(i<=50);
}