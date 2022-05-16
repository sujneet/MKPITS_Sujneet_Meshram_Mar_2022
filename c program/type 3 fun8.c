#include<stdio.h>
#include<conio.h>
int fun1(int b[])
{
	int i,t,p;
	
	t = b[0];
	p = 0;
	
	for(i=0; i<6; i++) 
	{
		if(b[i]<t) 
		{
			t= b[i];
			p = i;
		}
	}
	
return t;
}
void main()
{
	int a[6];
	int i;
	for(i=0; i<6; i++) 
	{
    	printf("Enter Number : ");
		scanf("%d", &a[i]);
	}
	int s;
	s=fun1(a);
	printf("Smallest Value: %d\n", s);
}