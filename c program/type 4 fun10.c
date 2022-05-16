#include<stdio.h>
#include<conio.h>
void fun1(int p1,int p2,int p3)
{
	
	if(p1>p2 && p1>p3)
	{
		printf("1st Person is greater ");
	}
	else
	if(p2>p3 && p2>p1)
	{
		printf("2nd Person is greater ");
	}
	else
	{
		printf("3rd Person is greater ");
	}
}
void main()
{
	float a1,a2,a3;
	printf("Enter age of 1st person : ");
	scanf("%f",&a1);
	printf("Enter age of 2nd person : ");
	scanf("%f",&a2);
	printf("Enter age of 3rd person : ");
	scanf("%f",&a3);
	fun1(a1,a2,a3);
}