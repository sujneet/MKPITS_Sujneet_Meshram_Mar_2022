#include<stdio.h>
#include<conio.h>
int fun1()
{
	int i,a[4];
	int sum=0;
	printf("Enter Any 5 number :\n");
	
	for(i=0;i<=4;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
		return sum;

}
void main()
{
	int s;
	s=fun1();
	printf("%d",s);
}