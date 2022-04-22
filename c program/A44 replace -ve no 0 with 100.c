#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("enter element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&j);
		if(j>0)
		{
			a[i]=j;
		}
		else
		{
			a[i]=100;
		}
	}
	printf("value of array \n");
	for(i=0;i<5;i++){
	printf("a[%d]=%d\n",i,a[i]);
}
}