#include<stdio.h>
int main()
{
    int n,i,t=0,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
    	t=a[i];
    	a[i]=a[i+1];
    	a[i+1]=t;
    	if(i+1==n-1)
    	{
    	    break;
    	}
    }
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
    	printf("%d  \n",a[i]);
	}
    
}