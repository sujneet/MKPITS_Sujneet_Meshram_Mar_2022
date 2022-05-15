#include<stdio.h>
int main()
{
	int n,m,i;
	printf("enter size of 1st array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter 1st array element ");
		scanf("%d",&a[i]);
	}
	printf("enter 2nd array element ");
	scanf("%d",&m);
	int b[n];
	for(i=0;i<m;i++)
	{
		printf("enter 2nd array element ");
		scanf("%d",&b[i]);
	}
	if(a[0]==b[0]  && a[n-1]==b[m-1])
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

}