#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0; i<n;i++){
        printf("Enter The valur of a[%d]",i);
        scanf("%d",&a[i]);
    }
     for(int i=0; i<n;i++){
        printf("Enter The valur of b[%d]",i);
        scanf("%d",&b[i]);
    }
    printf("Elements of Array a is: ");
    for(int i=0; i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nElements of Array b is: ");
    for(int i=0; i<n;i++){
        printf("%d ",b[i]);
    }
    for(int i=0; i<n;i++){
        
        c[i]= a[i]+b[i];
    }
    printf("\nElements of Array c is: ");
    for(int i=0; i<n;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}