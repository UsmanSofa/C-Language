#include<stdio.h>
int main(){
    int row,column,len=0,sum=0;
    float avg;
    printf("Enter row size: ");
    scanf("%d",&row);
    printf("Enter Column size: ");
    scanf("%d",&column);
    int a[row][column],b[row][column];
    for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter The Value of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter The Value of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nArray a is: \n");
      for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nArray b is: \n");
      for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            sum+= a[i][j];
        }
    }
    for(int i = 0 ;i<row;i++){
        for(int j=0;j<column;j++){
            sum+= b[i][j];
        }
    }
    len = (sizeof(a) + sizeof(b)) / sizeof(a[0][0]);
    printf("Array Length is: %d\n",len);
    printf("Array Sum is: %d\n",sum);
    avg = (float)sum/len;
    printf("Average of Array is: %.2f",avg);
    return 0;
}