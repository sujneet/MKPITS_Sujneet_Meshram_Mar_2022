#include<stdio.h>
int main()
{
	int x,y,z,n,m;
	printf("enter x y z");
	scanf("%d %d %d",&x,&y,&z);
	n=(x+y)*z;
	m=x*y+y*z;
	printf("\n (x+y)*z=%d and x*y+y*z=%d",n,m);
}