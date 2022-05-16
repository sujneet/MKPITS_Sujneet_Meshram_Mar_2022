#include<stdio.h>
#include<conio.h>
int fun1(int p1,int p2,int p3)
{
	
	if(p1>p2 && p1>p3)
	{
		return 0;
	}
	else
	if(p2>p3 && p2>p1)
	{
		return 1;
	}
	else
	{
		return 2;
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
	int s=fun1(a1,a2,a3);
	if(s==0)
	{
		printf("1st Person is greater ");
	}
	if(s==1)
	{
		printf("2nd Person is greater ");
	}
	if(s==2)
	{
		printf("3rd Person is greater ");
	}
}