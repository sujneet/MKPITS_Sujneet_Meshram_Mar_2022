#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,dis;
	printf("enter x1\n");
	scanf("%d",&x1);    
	printf("enter x2\n");
	scanf("%d",&x2);	
	printf("enter y1\n");
	scanf("%d",&y1);	
	printf("enter y2\n");
	scanf("%d",&y2);
	dis=sqrt(((x2-x1)*x2-x1)+((y2-y1)*y2-y1));
	printf("ditance between two pints is %d",dis);
}