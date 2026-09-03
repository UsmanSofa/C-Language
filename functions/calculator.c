#include<stdio.h>
int getNumber(){
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);
    return n;
}
int addition(int a, int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int multiplication(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int modules(int a,int b){
    return a%b;
}
int main(){
    while(1){
        int choice,a,b;
        printf("\nPress 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Modules\n");
        printf("Press 0 to exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            a = getNumber();
            b = getNumber();
            printf("Addition of %d and %d is: %d",a,b,addition(a,b));
            break;
        case 2:
            a = getNumber();
            b = getNumber();
            printf("Subtraction of %d and %d is: %d",a,b,subtraction(a,b));
            break;
        case 3:
            a = getNumber();
            b = getNumber();
            printf("Multiplication of %d and %d is: %d",a,b,multiplication(a,b));
            break;
        case 4:
            a = getNumber();
            b = getNumber();
            printf("Division of %d and %d is: %d",a,b,division(a,b));
            break;
        case 5:
            a = getNumber();
            b = getNumber();
            printf("Modules of %d and %d is: %d",a,b,modules(a,b));
            break;
        case 0:
            return 0;
            
        default:
            printf("Invalid Choice");
            break;
        }
    }

}