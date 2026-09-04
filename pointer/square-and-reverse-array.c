#include<stdio.h>

int main(){
    int *ptr;
    int size;
    printf("Enter The Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    ptr = &arr[0];
    for(int i = 0 ;i<size;i++){
        printf("Enter The valur of arr[%d]",i);
        scanf("%d",&*(ptr + i));
    }
    printf("The Elements of Array Are: \n");
    for(int i = 0 ; i < size;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\nSquare of Array is: \n");
    for(int i = 0 ; i < size;i++){
        *(ptr + i) = *(ptr + i) **(ptr + i);
        printf("%d ",*(ptr + i));
    }
    printf("\nReverse Array is: \n ");
    for(int i = size - 1; i >=0 ; i--){
        printf("%d ",*(ptr + i));
    }
}