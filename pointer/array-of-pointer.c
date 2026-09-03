#include<stdio.h>

int main(){
    int *ptr;
    int arr[]= {1,2,3,6,7};
    ptr = &arr[0];
    for(int i = 0; i<5;i++){
        printf("%p => %d\n",ptr+i,*(ptr+i));
    }
    for(int i = 0; i<5;i++){
        *(ptr+i)*=*(ptr+i);
    }
    printf("The Square of Array is:\n");
    for(int i = 0; i<5;i++){
        printf("%p => %d\n",ptr+i,*(ptr+i));
    }
    return 0;
}