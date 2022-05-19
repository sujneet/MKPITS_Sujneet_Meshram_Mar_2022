#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i + 1] < a[i]) 
        {
            flag=0;
        }
    }
    
    if(flag==0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}