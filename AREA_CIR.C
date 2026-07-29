#include<stdio.h>
#include<conio.h>
#define PI 3.14
main(){
	int r;
	float area;
	clrscr();
	printf("Enter the radius: ");
	scanf("%d",&r);
	area= PI*r*r;
	printf("Area of Circle: %0.2f",area);
	getch();
}
