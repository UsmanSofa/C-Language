#include<stdio.h>
void cube(int a){
    printf("The Cube is: %d",a*a*a);
}
int main(){
    int n;
    printf("Enter a Number to find cube: ");
    scanf("%d",&n);
    cube(n);
    return 0;
}