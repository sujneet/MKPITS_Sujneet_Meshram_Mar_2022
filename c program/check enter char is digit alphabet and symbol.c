#include<stdio.h>
int main()
{
	char c;
	printf("enter any character");
	scanf("%c",&c);
	if(c>='0'&&c<='9')
	{
		printf("entered char is number");
	}
	else 
	if(c>='A'&&c<='z')
	{
		printf("entered char is cpital alphabet");
	}
	else 
	if(c>='a'&&c<='z')
	{
		printf("entered char is small alphabet");
	}
	else
	{
		printf("entered char is special character");
	}
}