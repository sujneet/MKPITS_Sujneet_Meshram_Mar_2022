#include<stdio.h>
int main()
{
	int marks[99],m,i,a=0,t=0;
	float f;
	printf("mathamatics marks");
	for(i=0;;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]<=0)
		{
			break;
		}
		a++;
		t=t+m[i];
	}
	f=t/a;
	printf("average is %f\n",f);
}