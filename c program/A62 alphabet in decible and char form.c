#include<stdio.h>
void main() 
{
  char c;
  printf("Capital Letter In Decimal : \n");
  for (c=65;c<=90;c++) 
  {
    printf(" %c = %d \n ",c,c);
  }

  printf("Small Letters In Decimal : \n");
  for (c=97;c<=122;c++) 
  {
    printf(" %c = %d \n ",c,c);
  }

}