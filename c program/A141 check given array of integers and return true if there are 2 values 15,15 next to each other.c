#include<stdio.h>
int main()
{
	int n,i,temp=0;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==15&&a[i]==a[i+1])
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}