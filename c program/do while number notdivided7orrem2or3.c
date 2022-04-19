#include<stdio.h>
int main()
{
	int a,b,c,t,i,add=0;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		t=b;
		b=a;
		a=t;
	}
	i=a;
	do
	{
		if((i%7)==2||(i%7==3))
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
	while(i<=b);
}