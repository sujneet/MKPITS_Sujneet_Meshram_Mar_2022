#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(r%2==0)
			{
				printf("a ");
			}
			else
			{
				printf("%d ",c);
			}
		}
		printf("\n");
	}
	
}