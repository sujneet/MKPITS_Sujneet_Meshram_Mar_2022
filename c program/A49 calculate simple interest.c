#include<stdio.h>
#include<conio.h>
void main()
{

	int p,i,t,f;
	printf("Calculate Simple Intrest !\n");

	printf("Enter Principle : ");
	scanf("%d",&p);
	printf("Enter Rate Of Intrest : ");
	scanf("%d",&i);
	printf("Enter Time : ");
	scanf("%d",&t);

	f=(p*i*t)/100;

	printf("Simple interest = %d",f);

}