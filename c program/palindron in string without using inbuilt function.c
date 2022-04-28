#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i,t=0,len;
	printf("enter string");
	scanf("%s",&name);
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		if(name[i]!=name[len-i-1])
		{
			t=1;
			break;
		
		}
		
		}
		if(t==0)
		{
			printf("string is palindrom");
		}
		else
		{
			printf("string is not palindrom");
		}
	}