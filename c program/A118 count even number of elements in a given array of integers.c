#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n],count=0;
	printf("Enter the array : \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}	
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	printf("Even no in given array is : %d",count);	
}