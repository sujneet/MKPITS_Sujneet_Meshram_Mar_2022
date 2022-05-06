#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf(" Enter Any Three Number : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>=20&&n1<=50 || n2>=20&&n2<=50 || n3>=20&&n3<=50)
	{
		printf(" TRUE !");
	} 
	else
	{
		printf(" FALSE");
	}
}