#include<stdio.h>
int main()
{
	int i,add=0;
	i=10;
	while(i>=1)
	{
		add=add+i;
		printf("addition is %d\n",add);
		i--;
	}
	printf("add id %d",add);
}