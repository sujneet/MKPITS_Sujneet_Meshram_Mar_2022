#include<stdio.h>
int main()
{
	int i,add=0;
	for(i=10;i>=1;i--)
	{
		add = add +i;
		printf("add is %d\n",add);
	}
	printf("add is %d",add);
}