#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  	char name[50];
  	int i;

  	printf("Enter Lower Case String : ");
  	scanf("%s",name);

  	for (i=0; name[i]!='\0'; i++)
  	{
  		if(name[i] >='a' &&name[i]<='z')
  		{
  			name[i]=name[i]-32;
		}
  	}
	printf("Upper String = %s",name);
} 