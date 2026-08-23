#include<stdio.h>
int main(){
    int arr[5][5],sum=0;
    for(int i = 0 ;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter The Value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray a is: \n");
      for(int i = 0 ;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Boundary Elemets of Array: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0||i==4||j==0||j==4){
                printf("%d ",arr[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0||i==4||j==0||j==4){
                sum+=arr[i][j];
            }
        }
    }
    printf("Sum of Boundary Elements is: %d",sum);
    return 0;

}