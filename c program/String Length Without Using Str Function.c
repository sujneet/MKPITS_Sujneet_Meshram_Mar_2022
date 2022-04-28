#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10];
	int i,count=0;
	printf("Enter any Name: ");
	scanf("%s",name);

	for(i=0; name[i]!='\0';i++)
	{
		count=count+1;
	}
	printf("Length = %d",count);
}