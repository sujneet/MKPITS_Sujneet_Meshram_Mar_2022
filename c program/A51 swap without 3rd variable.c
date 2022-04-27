#include<stdio.h>
void main()
{
	int a,b;

	printf("Enter Any Two Value: \n");
	scanf(" %d %d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After Swapping : \n %d \n %d  ",a,b);

}
