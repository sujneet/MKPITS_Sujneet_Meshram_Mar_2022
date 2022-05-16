#include<stdio.h>
int fun1()
{
	int a[6];
	int i,t,p;
	
	for(i=0; i<6; i++) 
	{
    	printf("Enter Number : ");
		scanf("%d", &a[i]);
	}
	t = a[0];
	p = 0;
	
	for(i=0; i<6; i++) 
	{
		if(a[i]<t) 
		{
			t= a[i];
			p = i;
		}
	}
	
return t;
}
void main()
{
	int s;
	s=fun1();
	printf("Smallest Value: %d\n", s);
}