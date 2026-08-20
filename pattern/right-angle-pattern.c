#include<stdio.h>

int main()
{
     int num=1;
     int num2=1;
     char alpha= 'A';
     printf("Pattern 1: \n");
    for(int i =0; i<=5; i++){
        for(int j=1; j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 2: \n");
    for(int i=1; i<=5;i++){
        for(int j=5; j>=i;j--){
        printf("*");
        }
        printf("\n");
    }
    printf("\n"); 
    printf("Pattern 3: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
    } 
    printf("\n");
    printf("Pattern 4: \n");
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
        printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 5: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 6: \n");
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
        printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 7: \n");
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
        printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 8: \n");
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
        printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 9: \n");
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
        printf("%d",j);
        }
        printf("\n");
    }
    printf("\n"); 
    printf("Pattern 10: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        printf("%d ",num);
        num++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 11:\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(num % 2 == 1){
                printf("1");
            }else{
                printf("0");
            }
            num++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 12: \n");
    for(int i=1; i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j || i+j==6){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 13: \n");
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",num2);
            num2++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 14: \n");
    for(int i=1; i<=5;i++){
        char alpha='A';
        for(int j = 1;j<=i;j++){
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 15: \n");
    for(char i='E';i>='A';i--){
        for(char j = i;j>='A';j--){
            printf("%c ",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 15: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 15: \n");
    for(int i=1;i<=5;i++){
        char alpha='A';
        for(int j=1;j<=i;j++){
            printf("%c ",alpha);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 16: \n");
    for(char i='E';i>='A';i--){
        for(char j='E'; j>=i;j--){
            printf("%c ",i);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 17: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
           printf("%d ",j*2);
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 17: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j){
                printf("%d ",j);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Pattern 17: \n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                i=='@';
            }else{
                i=='#';
            }
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}