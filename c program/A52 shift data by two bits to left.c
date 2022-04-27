#include<stdio.h>
void main()
{
	int a,b;

	printf("Enter Any Number : ");
	scanf("%d",&a);

	a<<=2;

	b=a;

	printf("Left shifted data = %d ",b);
}
