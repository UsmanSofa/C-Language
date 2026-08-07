#include<stdio.h>
int main(){
    int i,multi=1,n;
    printf("Enter nunmber to print multiplicartion table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        multi= n*i;
        printf("%d x %d = %d\n",n,i,multi);
    }
    return 0;
}