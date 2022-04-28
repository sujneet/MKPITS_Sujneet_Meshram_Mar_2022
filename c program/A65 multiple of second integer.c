#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Check any two Number they are Multiple or Not !\n");
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("Enter Second Number : ");
	scanf("%d",&num2);

	if(num1%num2==0)
	{
		printf("\n \n %d Is Multiple Of %d",num1,num2);
	}
	else
	{
		printf("\n \n %d Is Not Multiple of %d ",num1,num2);
	}
}