#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1,rear=-1,que[10],n=10,temp,x,i;
void enque()
{
    if(rear==n-1)
    printf("queue is overflow");
    else
    if (front==-1 && rear==-1)
    {
        front=rear=0;
        que[rear]=x;
    }
    else
    {
        rear++;
        que[rear]=x;
    }
    
}

void deque()
{
    if(front==-1 && rear==-1)
    printf("queue is empty");
    else
    if(front>rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d removed",que[front]);
        front++;
    }
}

void dis()
{
    for(i=front; i<=rear; i++)
    {
        printf("%d ",que[i]);
    }

}

void main()
{
    int choice;
    while(1)
    {
        printf("\nPress 1 to add items");
        printf("\npress 2 to remove items");
        printf("\nPress 3 to display");
        printf("\nPress 4 to exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter item to add: ");
            scanf("%d",&x);
            enque();
            break;

            case 2:
            deque();
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