#include<stdio.h>
#include<string.h>
int main()
{
	char s1[34],s2[55];
	printf("enter 2 string");
	scanf("%s %s",&s1,&s2);
	printf("%s",strcat(s1,s2));
}