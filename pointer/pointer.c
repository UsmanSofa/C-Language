#include<stdio.h>
int main(){
    int a;
    int *ptr;
    a = 7;
    ptr = &a;
    printf("Address of a is: %u",ptr);
    return 0;
}