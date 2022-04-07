#include<stdio.h>
#include<conio.h>
int main()
{
	int num,d1,d2,d3,d4,d5,sum,eres=0,ores=0;
	printf("enter five digut number\n");
	scanf("%d",&num);
	
	d1=num%10;
	num=num/10;
	
	d2=num%10;
	num=num/10;
	
	d3=num%10;
	num=num/10;
	
	d4=num%10;
	num=num/10;
	
	d5=num%10;
	
	if(d1%2==0)
	{
		eres=eres+d1;
		
	}
	else
	{
		ores=ores+d1;

	}
	if(d2%2==0)
	{
		eres=eres+d2;
		
	}
	else
	{
		ores=ores+d2;
	}
	if(d2%3==0)
	{
		eres=eres+d3;
		
	}
	else
	{
		ores=ores+d3;
	}
	if(d2%4==0)
	{
		eres=eres+d4;
		
	}
	else
	{
		ores=ores+d4;
	}
	if(d2%5==0)
	{
		eres=eres+d5;
		
	}
	else
	{
		ores=ores+d5;
	}
	
	printf("sum of even =%d\n",eres);
	printf("sum of odd =%d\n",ores);
}
	
	
