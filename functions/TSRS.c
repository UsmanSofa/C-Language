#include<stdio.h>

int sum(int a , int b){
    return a+b;

}
int main(){
    int a,b;
    printf("Enter Value of a: ");
    scanf("%d",&a);
    printf("Enter Value of b: ");
    scanf("%d",&b);
    printf("The Addition of 2 Number is: %d",sum(a,b));
    return 0;
}