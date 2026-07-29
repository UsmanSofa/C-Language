#include<stdio.h>
#include<conio.h>

main(){
	int a=10;
	int b=5;
	clrscr();
	printf("Addition: %d + %d = %d\n",a,b,a+b);
	printf("Subtraction: %d - %d = %d\n",a,b,a-b);
	printf("Multiplication: %d X %d = %d\n",a,b,a*b);
	printf("Division: %d / %d = %d\n",a,b,a/b);
	printf("Modules:%d %% %d = %d",a,b,a%b);
	getch();

}