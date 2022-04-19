#include<stdio.h>
int main()
{
	int num=001;
	int a,b,c,a1,res;
	printf("all armstrong number between 1 to 1000");
	do
	{
		a1=num;
		a=a1%10;
		a1=a1/10;
		b=a1%10;
		a1=a1/10;
		c=a1%10;
		res=(a*a*a)+(b*b*b)+(c*c*c);
		if(num==res)
		{
			printf("%d\n",res);
		}
		num++;
	}
	while(num<=1000);
	printf("armsrong numbers are %d",res);
}