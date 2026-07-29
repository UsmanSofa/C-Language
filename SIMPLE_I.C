#include<stdio.h>
#include<conio.h>

main(){
	int p,n;
	float r,s_int;
	clrscr();
	printf("Enter The Principle Amount: ");
	scanf("%d",&p);
	printf("Enter the Rate of Interest: ");
	scanf("%f",&r);
	printf("Enter the number of months: ");
	scanf("%d",&n);
	s_int=(p*r*n)/100;
	printf("The simple Interest is: %0.2f",s_int);
	getch();
}