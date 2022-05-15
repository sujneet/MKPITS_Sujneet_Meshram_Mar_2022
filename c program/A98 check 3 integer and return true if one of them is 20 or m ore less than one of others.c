#include<stdio.h>
int main()
{
	int a,b,c,r1,r2,r3;
	printf("enter a b c");
	scanf("%d %d %d",&a,&b,&c);
	r1=a-b;
	r2=a-c;
	r3=b-c;
	if(r1>=20)
	{
		printf("true");
	}
	else
	if(r2>=20)
	{
		printf("true");
	}
	if(r3>=20)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}