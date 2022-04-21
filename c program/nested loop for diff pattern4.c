#include<stdio.h>
int main()
{
	int r,c,a=0;
	char ch='A';
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r%2==1)
			printf("%c",ch);
			else
			printf("%d",a);
		}
		printf("\n");
		if(r%2==0) ch++;
		else a++;
	}
}