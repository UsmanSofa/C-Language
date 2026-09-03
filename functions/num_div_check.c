#include<stdio.h>
void div_check(int a){
    if(a % 3 == 0 && a % 5 == 0){
        printf("It is Divisible by 3 and 5");
    }else{
        printf("It is Not divisible by 3 and 5");
    }
}
int main(){
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);
    div_check(n);
    return 0;
}