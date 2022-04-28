#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  	char name1[30],name2[30];
  	int i,j;

  	printf("Enter the First String : ");
  	scanf("%s",name1);

  	printf("Enter the Second String : ");
  	scanf("%s",name2);

  	for (i = 0; name1[i]!='\0'; i++);


  	for (j = 0; name2[j]!='\0'; j++, i++)
  	{
  		name1[i] =name2[j];
  	}
  	name1[i] ='\0';

  	printf("%s",name1);


}