#include<stdio.h>

int main(){
	int num;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	if(num%5==0 && num%11==0){
		printf("It is Divisible by 5 and 11");
	}else{
		printf("It is not divisible");
	}
	return 0;
}