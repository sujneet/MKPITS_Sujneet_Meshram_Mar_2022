#include<stdio.h>
void main() 
{
    int p,n;
    float q;
    p=1;
    for(n=0; n<11; ++n) 
    {
      if (n == 0)
      {
        p = 1;
      }
      else
      {
        p = p * 2;
        q = 1.0 /p;
      }
      printf("\n %d   %d  %f", n, p, q);
    }

  }