#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,res1,res2;
	printf("Enter any Two number : ");
	scanf("%d %d",&n1,&n2);

	res1=100-n1;
	res2=100-n2;

	if(res1<res2)
	{
		printf("%d Nearest to 100 ",n1);
	}
	else
	if(res2<res1)
	{
		printf("%d Nearest to 100 ",n2);
	}
	else
	{
		printf("Enter number is not nearest to 100 ");
	}

}
