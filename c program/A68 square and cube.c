#include<stdio.h>
void main()
{
	int num;
	printf("Square and Cube :\n");
    for(num=0; num<=20; num++)
        printf("%d\t%d\t%d\n",num,num*num,num*num*num);
}