#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,temp;
	printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter Array Element : ");
		scanf("%d",&a[i]);
	    temp=a[i];
	 	j=i-1;
	 	
		while(i>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
	    a[j+1]=temp;
	}
	printf("Sorted Array is : \n");
	
	for(i=0;i<n;i++)
	{
		printf(" %d \n",a[i]);
	}
}