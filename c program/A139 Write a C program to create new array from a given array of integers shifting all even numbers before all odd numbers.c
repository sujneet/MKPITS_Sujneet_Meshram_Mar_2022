#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t,l=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            t = a[l];
            a[l] = a[i];
            a[i] = t;
            l++;
        }
    }  
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
    	printf("%d  \n",a[i]);
	}
    
}