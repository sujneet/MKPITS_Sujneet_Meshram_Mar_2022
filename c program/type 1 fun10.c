#include<stdio.h>
void fun1()
{
	float p1,p2,p3;
	printf("Enter age of 1st person : ");
	scanf("%f",&p1);
	printf("Enter age of 2nd person : ");
	scanf("%f",&p2);
	printf("Enter age of 3rd person : ");
	scanf("%f",&p3);
	
	if(p1>p2 && p1>p3)
	{
		printf("1sr Person is greater ");
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
	fun1();
}