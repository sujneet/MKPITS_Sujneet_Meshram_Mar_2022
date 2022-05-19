#include<stdio.h>
int main()
{
    int n,i,l,f=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the length : ");
    scanf("%d",&l);
    int a[n];
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < l; i++)
    {
       if (a[i] != a[n - l + i])
        {
            f=0;
        }
    }
    
    if(f==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}