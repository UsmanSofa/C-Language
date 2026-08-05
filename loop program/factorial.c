/*120 5 x 4 x 3 x 2 x 1 
 fact = 1 fact*=i i = 1 
 1 x 1 = 1
 1 x 2 = 2
 2 x 3 = 6
 6 x 4 = 24
 24 x 5 = 120 
*/
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a Value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d factorial: %d",n,fact);
    return 0;
}