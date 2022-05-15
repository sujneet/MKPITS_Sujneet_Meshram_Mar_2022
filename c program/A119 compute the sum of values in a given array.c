#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array : \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
		if(a[i]!=17)
		{
			sum=sum+a[i];	
		}
	}
	printf("sum of given array except 17 is : %d",sum);
}