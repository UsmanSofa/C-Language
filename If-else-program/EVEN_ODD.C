#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("It is an Even Number");
    }else{
        printf("It is an Odd Number");
    }
    return 0;
}