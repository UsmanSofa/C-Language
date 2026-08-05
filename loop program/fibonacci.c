#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d ",a);
    for(i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}

 
// 0, 1, 1, 2, 3 ,5 ,8, 11
//a = 0 , b = 1, c= a+b = 1 c=b b=1 b=a a=1
// a=1 , b = 1, c=2, b=2,a=1
// a= 1,b= 2 c = 3, a= 2, b= 3