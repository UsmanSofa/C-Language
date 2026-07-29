#include<stdio.h>
#include<conio.h>
#define PI 3.14
main(){
	int r;
	float peri;
	clrscr();
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	peri= 2*PI*r;
	printf("Perimeter of Circle is: %0.2f",peri);
	getch();

}