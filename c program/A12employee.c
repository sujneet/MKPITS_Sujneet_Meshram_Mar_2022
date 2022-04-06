#include<stdio.h>
int main()
{
	double eid,hr,salary,amount;
	printf("enter employee id:\n");
	scanf("%lf",&eid);
	printf("enter hr he worked:\n");
	scanf("%lf",&hr);
	printf("enter amount he received amount per hr:\n");
	scanf("%lf",&amount);
	salary=hr*amount;
	printf("employee id is %lf\n he received amount per hour is %lf",eid,salary);
}