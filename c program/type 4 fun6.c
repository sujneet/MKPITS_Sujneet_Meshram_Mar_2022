#include<stdio.h>
#include<conio.h>
int fun1(int b[])
{
	int i,t=0;
	for(i=0;i<5;i++)
	{
		if(b[i]==1 && b[i+1]==2 && b[i+2]==3)
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
	int i,a[5];
	printf("Enter Five Number :\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
		
	}
	fun1(a);
}