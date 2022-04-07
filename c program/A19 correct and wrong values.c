#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("enter p");	
	scanf("%d",&p);	
	printf("enter q");	
	scanf("%d",&q);
	printf("enter r");	
	scanf("%d",&r);
	printf("enter s");	
	scanf("%d",&s);

	if((q>r)&&(s>p) &&  (r+s)>(p+q)  &&  (p%2==0) &&  (r>0) && (s>0))
	{
		printf("correct values");
	 }
	 else
	 {
	 printf("wrong values");
	 }
}