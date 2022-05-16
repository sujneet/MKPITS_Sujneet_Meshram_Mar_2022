#include<stdio.h>
#include<conio.h>
int fun1(int b[])
{
	int i;
	int sum=0;
	
	for(i=0;i<=4;i++)
	{
		sum=sum+b[i];
	}
		return sum;

}
void main()
{
	int i,a[4];
	printf("Enter Any 5 number :\n");
	for(i=0;i<=4;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	int s;
	s=fun1(a);
	printf("%d",s);
}