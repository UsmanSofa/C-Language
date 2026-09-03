#include<stdio.h>
int main(){

    int a,b;
    int *ptra,*ptrb;
    ptra = &a;
    ptrb = &b;
    printf("Enter The Value of a: ");
    scanf("%d",ptra);
    printf("Enter The Value of b: ");
    scanf("%d",ptrb);
    printf("\nvalue of a is: %d",*ptra);
    printf("\nvalue of b is: %d",*ptrb);
    *ptrb = *ptra + *ptrb;
    *ptra = *ptrb - *ptra;
    *ptrb = *ptrb - *ptra; 
    printf("\nValues after Swapping:");
    printf("\nvalue of a is: %d",*ptra);
    printf("\nvalue of b is: %d",*ptrb);
    return 0;
}