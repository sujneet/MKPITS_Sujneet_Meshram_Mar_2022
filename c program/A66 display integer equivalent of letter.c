#include<stdio.h>
void main() 
{
  char c;
  printf(" [a-z]: \n");
  for (c=97;c<=122;c++) 
  {
    printf(" %d",c);
  }
  printf("\n\n [A-Z]: \n");
  for (c=65;c<=90;c++) 
  {
    printf(" %d",c);
  }


}