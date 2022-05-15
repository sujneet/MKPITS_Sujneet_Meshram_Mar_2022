#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter an array element");
		scanf("%d",&a[i]);
	}
	if(a[0]==a[n-1])
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}