#include<stdio.h>
int main()
{
	int x,y,i,temp,sum=0;
	printf("enter 2 numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	i=x;
	while(i<=y)
	{
		if((i%17)!=0)
		{
			sum+=i;
		}
		i++;
	}
	printf("%d\n",sum);
}