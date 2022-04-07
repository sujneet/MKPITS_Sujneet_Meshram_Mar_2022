#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

	int a,b;            //a=total b=amount
	printf("enter total \n");
	scanf("%d",&b);
	a=b/2000;
	printf("notes of 2000 is %d\n",a);
	b=b-(a*2000);
	a=b/500;
	printf("notes of 500 is %d\n",a);
	b=b-(a*500);
	a=b/200;
	printf("notes of 200 is %d\n",a);
	b=b-(a*200);
	a=b/100;
	printf("notes of 100 is %d\n",a);
	b=b-(a*100);
	a=b/50;
	printf("notes of 50 is %d\n",a);
	b=b-(a*50);
	a=b/20;
	printf("notes of 20 is %d\n",a);
	b=b-(a*20);
	a=b/10;
	printf("notes of 10 us %d\n",a);
	b=b-(a*10);
	a=b/5;
	printf("coins of 5 is %d\n",a);
	b=b-(a*5);
	a=b/2;
	printf("coins of 2 is %d\n",a);
	b=b-(a*2);
	a=b/1;
	printf("coins of 1 is %d\n",a);
}