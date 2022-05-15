#include<stdio.h>
enum wday{sun,mon,tue,wed,thr,fri,sat};
int main()
{
	enum wday day;
	day=mon;
	printf("%d",day);
}