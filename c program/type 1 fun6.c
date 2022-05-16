#include<stdio.h>
void fun1()
{
	int i,a[5],t=0;
	printf("Enter Five Number :\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
		{
			printf("\n Sequence 1 2 3 is appear in an array");
			t=1;
		}
	}
	if(t==0)
	{
		printf("\n Sequence 1 2 3 is not appear in an array : ");
	}	
}
void main()
{
	fun1();
}