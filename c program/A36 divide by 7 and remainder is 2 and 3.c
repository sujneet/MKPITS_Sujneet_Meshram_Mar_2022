#include<stdio.h>
int main()
{
	int x,y,i,temp,sum=0;
	printf("enter 2 integer");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	i=x+1;
	while(i<y)
	{
		if((i%7)==2||(i%7)==3)
		{
			printf("%d\n",i);
		}
		i++;
	}
}