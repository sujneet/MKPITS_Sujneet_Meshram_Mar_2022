#include<stdio.h>
#include<conio.h>
void fun1(int backup)
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
		printf("Enter number is palindrome number");
		
	}
	else
	{
		printf("Enter number is not palindrome");
	}
}

void main()
{
	int z;
	printf("Enter any 3 digit number : ");
	scanf("%d",&z);
	fun1(z);
}