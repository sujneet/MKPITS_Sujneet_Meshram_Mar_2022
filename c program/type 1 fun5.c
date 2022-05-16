#include<stdio.h>
void fun1()
{
	int backup,num,a,b,c,rev;
	printf("Enter any 3 digit number : ");
	scanf("%d",&backup);
	
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
	fun1();
}