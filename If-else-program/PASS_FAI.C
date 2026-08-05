#include<stdio.h>
#include<conio.h>

main(){
	int marks;
	clrscr();
	printf("Enter your marks");
	scanf("%d",&marks);
	if(marks>=35){
		printf("You Passed");
	}else{
		printf("You Failed");
	}
	getch();
}
