#include<stdio.h>
int main(){
    int n,len;
    printf("Enter The Array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of a[%d] ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    len = sizeof(arr)/sizeof(arr[0]);
    printf("\nArray Length is: %d",len);
    return 0;
}