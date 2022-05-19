#include<stdio.h>
int main()
{
    int n,i,flag=0;
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
        if (a[i] == 5)
        {
            if ((i > 0 && a[i - 1] == 5) || (i < n - 1 && a[i + 1] == 5)) 
            {
                flag= 1;
            }
            else if (i == n - 1) 
            {
                flag = 0;
            }
            else 
            {
                flag=0;
            }
        }
    }
    
    if(flag==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}