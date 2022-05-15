#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int a[n],b[3];
	printf("Enter the array : \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}	
	b[0]=a[2];
	b[1]=a[3];
	b[2]=a[4];
	for(int i=0;i<3;i++)
	{
		printf("%d ",b[i]);
	}
	
	
}