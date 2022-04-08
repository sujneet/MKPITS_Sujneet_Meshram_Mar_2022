#include<stdio.h>
int main()
{
	int num,a1,a2,a3,a4,a5,ores=0,eres=0;
	printf("enter 5 digit");
	scanf("%d",&num);
	a1=num%10;
	num=num/10;
	a2=num%10;
	num=num/10;
	a3=num%10;
	num=num/10;
	a4=num%10;
	num=num/10;
	a5=num%10;
	num=num/10;
		if(a1%2==0)
	{
		eres=eres+a1;
		
	}
	else
	{
		ores=ores+a1;

	}
	if(a2%2==0)
	{
		eres=eres+a2;
		
	}
	else
	{
		ores=ores+a2;
	}
	if(a3%2==0)
	{
		eres=eres+a3;
		
	}
	else
	{
		ores=ores+a3;
	}
	if(a4%2==0)
	{
		eres=eres+a4;
		
	}
	else
	{
		ores=ores+a4;
	}
	if(a5%2==0)
	{
		eres=eres+a5;
		
	}
	else
	{
		ores=ores+a5;
	}
	
	printf("sum of odd =%d\n",ores);

	
}