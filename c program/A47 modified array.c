#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,t;
	for(i=0; i<5; i++) 
	{	
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}

	for(i=0; i<5; i++) 
	{
		if( i<(5/2) ) 
		{
			t = a[i];
			a[i] = a[5-(i+1)];
			a[5-(i+1)] = t;
		}
	}

	for(i=0; i<5; i++) 
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
} 
