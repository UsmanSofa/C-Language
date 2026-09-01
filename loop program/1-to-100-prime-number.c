#include<stdio.h>
int main(){
    int last_num=100;
    for(int i = 50 ; i <= last_num ;i++){
        int count = 0;
        for(int j = 1; j <=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    return 0;
}