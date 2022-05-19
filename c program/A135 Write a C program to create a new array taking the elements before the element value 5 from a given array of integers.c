#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
       if(a[i]==5)
    	{
    	    break;
    	}
        b[i]=a[i];
        j=j+1;
    }
    
    printf("New Array is : \n");
    for (i=0;i<j;i++)
    {
    	printf("%d  \n",b[i]);
	}
    
}