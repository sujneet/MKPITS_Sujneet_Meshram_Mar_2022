#include<stdio.h>
void fun1()
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
		printf("%d",sum);

}
void main()
{
	fun1();
}