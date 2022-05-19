#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=3,n=10,stck[10]={1,2,5,7},temp,x,i;
void push()
{
    if(top==n-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stck[top]=x;
    }
}

void pop()
{
    if(top==-1)
    printf("stack is empty");
    else
    {
        temp=stck[top];
        top--;
        printf("%d is removed",temp);
    }
}

void dis()
{
    for(i=top; i>-1; i--)
    {
        printf("%d ",stck[i]);
    }

}

void main()
{
    int choice;
    while(1)
    {
        printf("Press 1 to add items");
        printf("\npress 2 to remove items");
        printf("\nPress 3 to display\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter item to add: ");
        scanf("%d",&x);
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        dis();
        break;

        case 4:
        exit(0);

        default:
        printf("invalid");
        break;
        
        }
    }
}