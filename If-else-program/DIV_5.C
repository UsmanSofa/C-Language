#include<stdio.h>
#include<conio.h>

main(){
	int num;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	if(num%5==0){
		printf("it is divisible by 5");
	}else{
		printf("it is not divisible by 5");
	}
	getch();
}