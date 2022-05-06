#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf(" Enter Any Two Number : ");
	scanf("%d %d",&n1,&n2);

	if(n1>=40&&n1<=50&&n2>=40&&n2<=50 || n1>=50&&n1<=60&&n2>=50&&n2<=60)
	{
		printf(" TRUE !");
	} 
	else
	{
		printf(" FALSE");
	}
}