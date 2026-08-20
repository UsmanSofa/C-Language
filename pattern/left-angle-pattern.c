#include<stdio.h>
int main(){
    int num=1;
    printf("Pattern 18: \n");
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 19: \n");
    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1; j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("Pattern 20: \n");
        for(int i=1;i<=5;i++){
            for (int k=5;k>=i;k--){
                printf(" ");
            }
            for(int j= 1; j<=i;j++){
                printf("%d ",num);
                num++;
            }
            printf("\n");
        }
    printf("\n");
    printf("Pattern 20: \n");
    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}