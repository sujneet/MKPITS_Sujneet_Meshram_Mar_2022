#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		sum=sum+m;
	}
	printf("%d",sum); 
}