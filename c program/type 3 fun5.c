#include<stdio.h>
#include<conio.h>
int fun1(int backup)
{
	int num,a,b,c,rev;
	
	num=backup;
	
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	rev=a*100+b*10+c*1;
	if(backup==rev)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}

void main()
{
	int z;
	printf("Enter any 3 digit number : ");
	scanf("%d",&z);
	int s=fun1(z);
	if(s==1)
	{
		printf("Enter number is palindrome number");
		
	}
	else
	{
		printf("Enter number is not palindrome");
	}
	
}