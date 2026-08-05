#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("A is Greater");
    }else{
        printf("B is Greater");
    }
    return 0;
}