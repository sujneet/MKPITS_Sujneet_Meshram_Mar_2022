#include<stdio.h>
int main()
{
	int i,m;
	printf("emter number");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		if(i%2==0)
		{
			printf("%d",i*i);
		}
	}
}