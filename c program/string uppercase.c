#include<stdio.h>
#include<string.h>
int main()
{
	char name[36];
	printf("enter string");
	scanf("%s",&name);
	printf("%s",strupr(name));
}