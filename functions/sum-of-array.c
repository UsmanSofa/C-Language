#include<stdio.h>
int sumofArray(int arr[],int size){
    int sum=0;
    for(int i = 0; i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    printf("Enter The Size of Array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size;i++){
        printf("Enter the valur of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("The sum of Array is: %d",sumofArray(arr,size));
    return 0;
}