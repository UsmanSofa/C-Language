#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    if(num>0){
        printf("It is Postive");
    }else{
        printf("It is Negative");
    }
    return 0;
}