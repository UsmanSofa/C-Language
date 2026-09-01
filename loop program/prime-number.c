#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter The value of num: ");
    scanf("%d",&num);
    for(int i = 2; i<=num;i++){
       if(num%i==0){
        count++;
       }
    }
    printf("Value of Num is : %d\n",num);
    if(count == 1){
            printf("It is a prime number");

        }else{
            printf("it is not a prime number");
        }
    
    return 0;
}