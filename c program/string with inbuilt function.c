#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],bak[10],s;
	printf("enter name");
	scanf("%s",&name);
	strcpy(bak,name);
	strrev(name);
	s=strcmp(bak,name);
	if(s==0)
	
	{
		printf("%s is palindrom",bak);
	}
	else
	{
		printf("%s is not palindrom",bak);
	}
}