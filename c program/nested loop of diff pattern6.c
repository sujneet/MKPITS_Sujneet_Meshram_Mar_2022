#include<stdio.h>
int main()
{
	int c,r,n=1;
	for(r=3;r>=1;r--)
	{
		for(c=1;c<=3;c++)
		{
			if(c>=r)
			{
				printf("%d",n);
				n=n+1;
			}
			else
			{
				printf(" ");
			}
			
		}
		n=1;
		printf("\n");
		
	}
}