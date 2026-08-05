#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	char choice;
	clrscr();
	printf("Enter the Value of a: ");
	scanf("%d",&a);
	printf("Enter the Value of b: ");
	scanf("%d",&b);
	printf("Enter Your Choice + - * / % :  ");
	scanf("%c",&choice);
	printf("Your Choice: %c\n",choice);
	switch(choice){
		case '+':
		printf("Addition: %d",a+b);
		break;
		default:
		printf("Invalid Choice");
	}
	getch();
}