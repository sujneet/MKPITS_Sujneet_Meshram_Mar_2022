#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf(" Enter Any Two Number : ");
	scanf("%d %d",&n1,&n2);
	
	if(n1>=20&&n1<=50 ||n2>=20&&n2<=50)
	{
		printf(" TRUE !");
	} 
	else
	{
		printf(" FALSE");
	}
}