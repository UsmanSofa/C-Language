#include<stdio.h>
int main(){
    int size,length=1;
    printf("Enter Array Size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i< size;i++){
        printf("Enter The Element of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("array is: \n");
    for(int i=0;i<size;i++){
        printf("The Elements of arr[%d] is %d\n",i,arr[i]);
    }
    length = sizeof(arr)/sizeof(arr[0]);
    printf("Length of Array is: %d",length);
    return 0;
}