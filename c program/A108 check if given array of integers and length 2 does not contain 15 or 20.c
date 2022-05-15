#include<stdio.h>
void main()
{
	int i,a[2],x=0;
	
	for(i=0;i<2;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(int j=0;j<2;j++)
	{
		if(a[j]==15 || a[j]==20)
		{
			printf("False !");
			x=1;
			break;
		}
	}
	if(x==0)
	{
		printf("True !");
	}
	
}