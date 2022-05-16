#include<stdio.h>
int fun1()
{
    int n1,num,r,res=0,n=0;
	printf("Enter Any Number : ");
    scanf("%d",&n1);
	num=n1;
    while(num!=0)
    {
        num=num/10;
        n++;
    }
	num=n1;
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
	if(res==n1)
	{
        printf("Number is Armstrong ! \n",n1);
    }
    else
    {
		printf("Number is not Armstrong ! \n", n1);
    }
}

void main()
{
	fun1();
}