#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
       if(a[i]==5)
    	{
    	    for(j=i+1;j<n;j++)
    	    {
    	        printf("%d \n",a[j]);
    	    }
    	    break;
    	}
    }
}