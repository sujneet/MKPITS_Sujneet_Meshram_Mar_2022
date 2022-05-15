#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n],t=0;
	printf("Enter the array : \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
		if(a[i]==5)
		{
			t=1;
		}
		else 
		if(t && a[i]==6)
		{
			t=0;
		}
		else 
		if(t==0)
		{
			sum=sum+a[i];
		}
	}
	printf("Sum of given Array except 5 and 6 is : %d",sum);
}