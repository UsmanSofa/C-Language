#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter The value of n: ");
    scanf("%d",&n);
    do{
        if (i % 2 == 0)
        {
            printf("%d\n",i);
            
        }
        i++;
    }while(i<n);
    return 0;
}