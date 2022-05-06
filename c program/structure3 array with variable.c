#include<stdio.h>
struct student
{
	int id;
	char name[30];
	int i;
	
};
 void main()
{
	
	int i;
	struct student s[4];
	for(i=0;i<4;i++)
	{
	
	printf("Enter student id :");
	scanf("%d",&s[i].id);
	printf("Enter student name :");
	scanf("%s",&s[i].name);
	}
    
    for(i=0;i<4;i++)
    {
	
	printf("student id :%d",s[i].id);
	printf(" \nstudent id :%s",s[i].name);
	}
	
}