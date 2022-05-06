#include<stdio.h>
struct stud
{
	int id;
	char name[20];
	
};
void main()
{
	struct stud s1={45,"sujneet"
	};
	printf("stud id =%d",s1.id);
	printf("stud name =%s",s1.name);
}