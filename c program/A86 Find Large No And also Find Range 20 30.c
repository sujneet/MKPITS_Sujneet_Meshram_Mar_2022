#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter Any 1st Number :");
	scanf("%d",&n1);
	printf("Enter Any 2nd Number :");
	scanf("%d",&n2);

	if(n1>=20 && n1<=30 || n2>=20 && n2<=30 )
	{
		printf("TRUE ! The Given Number is in a Range\n");
		if(n1>n2)
		{
			printf("1st Number is Greater ! \n");
		}
		else
		{
			printf("2nd Number is Greater ! \n");
		}
	}
	else
	{
		printf("FALSE !\n");
	}


}