#include<stdio.h>
#include<conio.h>

void main()
{
  int a[10],i,pos,v,n;
  printf("enter the number of array n= ");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<=n;i++)
  {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
  }
  printf("enter the number you want to insert v= \n");
  scanf("%d",&v);
  for(i=n;i>=0;i--)
  {
  a[i+1]=a[i];
  }
  pos=0;
   a[pos]=v;
  for(i=0;i<=n+1;i++)
  {
  printf("a[%d]=%d\n",i,a[i]);
  }
  getch();
  }