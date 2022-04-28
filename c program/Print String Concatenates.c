#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[20]={"My Name is "};
	char str2[40]={"sujneet meshram"};

	strcat(str1,str2);
	printf(" %s ",str1);
}