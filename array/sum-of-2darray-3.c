#include<stdio.h>
int main(){
    int row,column;
    printf("Enter Row Value: ");
    scanf("%d",&row);
    printf("Enter Column Value: ");
    scanf("%d",&column);
    int a[row][column],b[row][column],c[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter Value of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter Value of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Elements of Array a is: \n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Elements of Array b is: \n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("Elements of Array c is: \n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}