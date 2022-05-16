#include<stdio.h>
#include<conio.h>

void fun1(int a)
{
    int num,r,res=0,n=0;
	num=a;
    while(num!=0)
    {
        num=num/10;
        n++;
    }
	num=a;
	while (num!=0)
    {
        r=num%10;
        int c=1;
        int i=0;
        while(i<n)
        {
            c=c*r;
            i=i+1;
        }
        res=res+c;
        num=num/10;
    }
	if(res==a)
	{
        printf("Number is Armstrong ! \n",a);
    }
    else
    {
		printf("Number is not Armstrong ! \n", a);
    }
}

void main()
{
	int n1;
	printf("Enter Any Number : ");
    scanf("%d",&n1);
	fun1(n1);
}