#include<stdio.h>
int main(){
    int row,column,sum=0;
    printf("Enter Value of Row: ");
    scanf("%d",&row);
    printf("Enter Column Value: ");
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter The Value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array Elements are: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           if(i + j == 2){ 
                sum += arr[i][j];
            } 
        }
        printf("\n");
    }
    printf("\nSum Of Anti Diagonal Array is: %d",sum);
    return 0;
}