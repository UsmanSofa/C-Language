#include<stdio.h>
#include<conio.h>

main(){
	int h,b,area;
	clrscr();
	printf("Enter The height of Triangle: ");
	scanf("%d",&h);
	printf("Enter the base of Triangle: ");
	scanf("%d",&b);
	area=(h*b)/2;
	printf("The Area of Triangle is : %d",area);
	getch();
}