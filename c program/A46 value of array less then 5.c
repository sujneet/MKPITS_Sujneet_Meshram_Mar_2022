#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i;

	printf("Enter Value Of Number \n");

	for(i=0;i<5;i++)
	{
		printf("Enter a Number : "); 
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		if(a[i]<5)
		{
			printf("a[%d] = %d \n",i,a[i]);
		}
	}

} 