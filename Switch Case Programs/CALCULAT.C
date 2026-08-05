#include<stdio.h>

int main(){
	int a,b;
	char choice;
	printf("Enter the Value of a: ");
	scanf("%d",&a);
	printf("Enter the Value of b: ");
	scanf("%d",&b);
	printf("Enter Your Choice + - * / % :  ");
	scanf(" %c",&choice);
	printf("Your Choice: %c\n",choice);
	switch(choice){
		case '+':
		printf("Addition: %d",a+b);
		break;
		case '-':
		printf("Subtractin: %d",a-b);
		break;
		case '*':
		printf("Subtractin: %d",a*b);
		break;
		case '/':
		printf("Subtractin: %d",a/b);
		break;
		case '%':
		printf("Subtractin: %d",a%b);
		break;
		default:
		printf("Invalid Choice");
	}
	return 0;
}