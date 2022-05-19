#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t=0,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    	if(a[i]==5)
    	{
    		count=count+1;
		}
    }
    while(count>0)
    {
    	for (i=0;i<n;i++)
    	{
        	if (a[i] == 5)
        	{
            	t=a[i];
            	a[i]=a[i+1];
            	a[i+1]=t;
        	}
    	}
    	count=count-1;
	}
    
    for(i=0;i<n;i++)
    {
    	if(a[i]==5)
    	{
    		a[i]=0;
		}
	}
    
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
    	printf("%d  \n",a[i]);
	}
    
}