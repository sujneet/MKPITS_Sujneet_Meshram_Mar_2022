#include<stdio.h>
int main()
{
    int n,i,odd=0,even=0;
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
        if (odd<2 && even<2) 
        {
            if(a[i]%2 == 0)
            {
                even=even+1;
                odd=0;
            }
            else
            {
                odd=odd+1;
                even=0;
            }
        }
    }
    
    if(even==2||odd==2)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}